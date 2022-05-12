/**
 * This file was auto-generated by the Titanium Module SDK helper for Android
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 */
package ti.editor;

import org.appcelerator.kroll.KrollDict;
import org.appcelerator.kroll.KrollPropertyChange;
import org.appcelerator.kroll.KrollProxy;
import org.appcelerator.kroll.common.Log;
import org.appcelerator.titanium.proxy.TiViewProxy;
import org.appcelerator.titanium.util.TiConvert;
import org.appcelerator.titanium.view.TiUIView;
import org.appcelerator.titanium.TiApplication;

import android.view.LayoutInflater;
import android.view.View;
import android.view.inputmethod.InputMethodManager;
import android.widget.FrameLayout;
import android.widget.RelativeLayout;
import android.content.Context;
import android.text.Editable;
import android.text.InputType;
import android.text.TextWatcher;


import androidx.annotation.NonNull;

import org.wordpress.aztec.Aztec;
import org.wordpress.aztec.AztecText;
import org.wordpress.aztec.ITextFormat;
import org.wordpress.aztec.toolbar.AztecToolbar;
import org.wordpress.aztec.toolbar.IAztecToolbarClickListener;

import java.util.List;


public class EditorView extends TiUIView implements IAztecToolbarClickListener, TextWatcher, AztecText.OnLinkTappedListener {
	
	private AztecText aztecEditorView;
	private AztecToolbar aztecToolbar;
	private FrameLayout mainLayout;
	private RelativeLayout layoutContainer;
	private final TiViewProxy viewProxy;

	public EditorView(TiViewProxy proxy) {
		super(proxy);
		
		viewProxy = proxy;
		
		setupAztecEditor();
		setNativeView(mainLayout);
	}
	
	private void setupAztecEditor() {
		LayoutInflater inflater = LayoutInflater.from(viewProxy.getActivity());
		
		mainLayout = (FrameLayout) inflater.inflate(Utils.getR("layout.main_layout"), null, false);
		
		layoutContainer = mainLayout.findViewById(Utils.getR("id.layout_container"));
		aztecEditorView = mainLayout.findViewById(Utils.getR("id.editor_textview"));
		aztecToolbar = mainLayout.findViewById(Utils.getR("id.editor_toolbar"));

		setupColors();
		
		aztecEditorView.addTextChangedListener(this);
		aztecEditorView.setOnLinkTappedListener(this);
		aztecEditorView.setLinkTapEnabled(true);

		Aztec.with(aztecEditorView, aztecToolbar, this);
	}
	
	private void setupColors() {
		int fontColor = Utils.getColor("tieditor_fontColor");
		if (fontColor != -1) {
			aztecEditorView.setTextColor(fontColor);
		}
		
		int hintFontColor = Utils.getColor("tieditor_hintColor");
		if (hintFontColor != -1) {
			aztecEditorView.setHintTextColor(hintFontColor);
		}

		int bgColor = Utils.getColor("tieditor_editorBackgroundColor");
		if (bgColor != -1) {
			layoutContainer.setBackgroundColor(bgColor);
		}
	}

	@Override
	public void processProperties(KrollDict d) {
		super.processProperties(d);

		if (d.containsKey("content")) {
			setContent(d.getString("content"));
			
		}
		if (d.containsKey("hintText")) {
			setHintText(d.getString("hintText"));
			
		}
		if (d.containsKey("editable")) {
			setEditable(d.getBoolean("editable"));
			
		}
		if (d.containsKey("color")) {
			setColor(d.get("color"));
			
		}
		if (d.containsKey("editorBackgroundColor")) {
			setEditorBackgroundColor(d.get("editorBackgroundColor"));

		}
		if (d.containsKey("editorToolbarVisible")) {
			setEditorToolbarVisible(d.getBoolean("editorToolbarVisible"));

		}
	}

	@Override
	public void propertyChanged(String key, Object oldValue, Object newValue, KrollProxy proxy) {
		KrollDict d = new KrollDict();
		d.put(key, newValue);
		processProperties(d);
	}

	@Override
	public void beforeTextChanged(CharSequence arg0, int arg1, int arg2, int arg3) {}

	@Override
	public void onTextChanged(CharSequence arg0, int arg1, int arg2, int arg3) {}
	
	@Override
	public void afterTextChanged(Editable arg0) {
		fireChangeEvent();
	}

    @Override
    public void onToolbarCollapseButtonClicked() {}

    @Override
    public void onToolbarExpandButtonClicked() {}

    @Override
    public void onToolbarHeadingButtonClicked() {}

    @Override
    public void onToolbarHtmlButtonClicked() {}

    @Override
    public void onToolbarListButtonClicked() {}

    @Override
    public boolean onToolbarMediaButtonClicked() {
        return false;
    }
    
    @Override
    public void onToolbarFormatButtonClicked(ITextFormat iTextFormat, boolean b) {
    	// FIXME: need to implement a proper text-change listener rather than delaying the thread
        new Thread(new Runnable() {
            @Override
            public void run() {
                try {
                    Thread.sleep(1000);
                    fireChangeEvent();
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }).start();
    }
    
    /** General API's **/
    private void fireChangeEvent() {
    	KrollDict event = new KrollDict();
		event.put("value", aztecEditorView.toFormattedHtml());
		viewProxy.fireEvent("change", event);
	}
    
    public void focus() {
		aztecEditorView.requestFocus();
		InputMethodManager imm = (InputMethodManager) TiApplication.getAppCurrentActivity().getSystemService(Context.INPUT_METHOD_SERVICE);
		imm.toggleSoftInputFromWindow(aztecEditorView.getWindowToken(), InputMethodManager.SHOW_IMPLICIT, 0);
	}

	public void setEditorToolbarVisible(Boolean editorToolbarVisible) {
		aztecToolbar.setVisibility(editorToolbarVisible ? View.VISIBLE : View.GONE);
	}

	public void blur() {
		aztecEditorView.clearFocus();
        InputMethodManager inputManager = (InputMethodManager) TiApplication.getAppCurrentActivity().getSystemService(Context.INPUT_METHOD_SERVICE);
        inputManager.hideSoftInputFromWindow(aztecEditorView.getWindowToken(), 0);
	}
    
    public String getContent() {
		return aztecEditorView.toFormattedHtml();
	}

	public void setContent(String content) {
        aztecEditorView.fromHtml(content, false);
	}

    public void setHintText(String hintText) {
    	aztecEditorView.setHint(hintText);
    }
    
    public String getHintText() {
    	return aztecEditorView.getHint().toString();
    }
    
    public void setEditable(boolean editable) {
    	if (editable) {
    		aztecEditorView.setInputType(InputType.TYPE_CLASS_TEXT);
    	} else {
    		aztecEditorView.setInputType(InputType.TYPE_NULL);
    	}
    	
    	aztecEditorView.setEnabled(editable);
    }
    
    public boolean getEditable() {
    	return aztecEditorView.isEnabled();
    }
    
    public void setColor(Object color) {
    	if (color != null) {
    		String colorString = color.toString();
    		
    		if (!colorString.isEmpty()) {
    			aztecEditorView.setTextColor( TiConvert.toColor(colorString) );
    		}
    	}
    }

    public void setEditorBackgroundColor(Object color) {
    	if (color != null) {
    		String colorString = color.toString();
    		
    		if (!colorString.isEmpty()) {
    			layoutContainer.setBackgroundColor( TiConvert.toColor(colorString) );
    		}
    	}
    }

	@Override
	public void onLinkTapped(@NonNull View view, @NonNull String url) {
		KrollDict event = new KrollDict();
		event.put("url", url);
		viewProxy.fireEvent("link", event);
	}
}

#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.8 (swiftlang-5.8.0.124.2 clang-1403.0.22.11.100)
#ifndef GRIDICONS_SWIFT_H
#define GRIDICONS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Gridicons",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

/// The Gridicon class encapsulates generation and caching of Gridicon icons, however requesting
/// of images should be done via the UIImage extensions <code>gridicon(_:)</code> and <code>gridicon(_:size:)</code>.
SWIFT_CLASS("_TtC9Gridicons8Gridicon")
@interface Gridicon : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, GridiconType, closed) {
  GridiconTypeAddImage = 0,
  GridiconTypeAddOutline = 1,
  GridiconTypeAdd = 2,
  GridiconTypeAlignCenter = 3,
  GridiconTypeAlignImageCenter = 4,
  GridiconTypeAlignImageLeft = 5,
  GridiconTypeAlignImageNone = 6,
  GridiconTypeAlignImageRight = 7,
  GridiconTypeAlignJustify = 8,
  GridiconTypeAlignLeft = 9,
  GridiconTypeAlignRight = 10,
  GridiconTypeArrowDown = 11,
  GridiconTypeArrowLeft = 12,
  GridiconTypeArrowRight = 13,
  GridiconTypeArrowUp = 14,
  GridiconTypeAside = 15,
  GridiconTypeAttachment = 16,
  GridiconTypeAudio = 17,
  GridiconTypeBell = 18,
  GridiconTypeBlock = 19,
  GridiconTypeBold = 20,
  GridiconTypeBook = 21,
  GridiconTypeBookmarkOutline = 22,
  GridiconTypeBookmark = 23,
  GridiconTypeBriefcase = 24,
  GridiconTypeBug = 25,
  GridiconTypeCalendar = 26,
  GridiconTypeCamera = 27,
  GridiconTypeCaption = 28,
  GridiconTypeCart = 29,
  GridiconTypeChat = 30,
  GridiconTypeCheckmarkCircle = 31,
  GridiconTypeCheckmark = 32,
  GridiconTypeChevronDown = 33,
  GridiconTypeChevronLeft = 34,
  GridiconTypeChevronRight = 35,
  GridiconTypeChevronUp = 36,
  GridiconTypeClearFormatting = 37,
  GridiconTypeClipboard = 38,
  GridiconTypeCloudDownload = 39,
  GridiconTypeCloudOutline = 40,
  GridiconTypeCloudUpload = 41,
  GridiconTypeCloud = 42,
  GridiconTypeCode = 43,
  GridiconTypeCog = 44,
  GridiconTypeComment = 45,
  GridiconTypeComputer = 46,
  GridiconTypeCoupon = 47,
  GridiconTypeCreate = 48,
  GridiconTypeCreditCard = 49,
  GridiconTypeCrop = 50,
  GridiconTypeCrossCircle = 51,
  GridiconTypeCrossSmall = 52,
  GridiconTypeCross = 53,
  GridiconTypeCustomPostType = 54,
  GridiconTypeCustomize = 55,
  GridiconTypeDomains = 56,
  GridiconTypeDropdown = 57,
  GridiconTypeEllipsisCircle = 58,
  GridiconTypeEllipsis = 59,
  GridiconTypeExternal = 60,
  GridiconTypeFilter = 61,
  GridiconTypeFlag = 62,
  GridiconTypeFlipHorizontal = 63,
  GridiconTypeFlipVertical = 64,
  GridiconTypeFolderMultiple = 65,
  GridiconTypeFolder = 66,
  GridiconTypeFullscreenExit = 67,
  GridiconTypeFullscreen = 68,
  GridiconTypeGift = 69,
  GridiconTypeGlobe = 70,
  GridiconTypeGrid = 71,
  GridiconTypeHeadingH1 = 72,
  GridiconTypeHeadingH2 = 73,
  GridiconTypeHeadingH3 = 74,
  GridiconTypeHeadingH4 = 75,
  GridiconTypeHeadingH5 = 76,
  GridiconTypeHeadingH6 = 77,
  GridiconTypeHeading = 78,
  GridiconTypeHeartOutline = 79,
  GridiconTypeHeart = 80,
  GridiconTypeHelpOutline = 81,
  GridiconTypeHelp = 82,
  GridiconTypeHistory = 83,
  GridiconTypeHouse = 84,
  GridiconTypeImageMultiple = 85,
  GridiconTypeImageRemove = 86,
  GridiconTypeImage = 87,
  GridiconTypeIndentLeft = 88,
  GridiconTypeIndentRight = 89,
  GridiconTypeInfoOutline = 90,
  GridiconTypeInfo = 91,
  GridiconTypeInk = 92,
  GridiconTypeInstitution = 93,
  GridiconTypeItalic = 94,
  GridiconTypeLayoutBlocks = 95,
  GridiconTypeLayout = 96,
  GridiconTypeLineGraph = 97,
  GridiconTypeLinkBreak = 98,
  GridiconTypeLink = 99,
  GridiconTypeListCheckmark = 100,
  GridiconTypeListOrderedRtl = 101,
  GridiconTypeListOrdered = 102,
  GridiconTypeListUnordered = 103,
  GridiconTypeLocation = 104,
  GridiconTypeLock = 105,
  GridiconTypeMail = 106,
  GridiconTypeMention = 107,
  GridiconTypeMenu = 108,
  GridiconTypeMenus = 109,
  GridiconTypeMicrophone = 110,
  GridiconTypeMinusSmall = 111,
  GridiconTypeMinus = 112,
  GridiconTypeMoney = 113,
  GridiconTypeMultipleUsers = 114,
  GridiconTypeMySitesHorizon = 115,
  GridiconTypeMySites = 116,
  GridiconTypeNametag = 117,
  GridiconTypeNextPage = 118,
  GridiconTypeNotVisible = 119,
  GridiconTypeNoticeOutline = 120,
  GridiconTypeNotice = 121,
  GridiconTypeOffline = 122,
  GridiconTypeP2 = 123,
  GridiconTypePages = 124,
  GridiconTypePause = 125,
  GridiconTypePencil = 126,
  GridiconTypePhone = 127,
  GridiconTypePin = 128,
  GridiconTypePlans = 129,
  GridiconTypePlay = 130,
  GridiconTypePlugins = 131,
  GridiconTypePlusSmall = 132,
  GridiconTypePlus = 133,
  GridiconTypePopout = 134,
  GridiconTypePosts = 135,
  GridiconTypePrint = 136,
  GridiconTypeProductDownloadable = 137,
  GridiconTypeProductExternal = 138,
  GridiconTypeProductVirtual = 139,
  GridiconTypeProduct = 140,
  GridiconTypeQuote = 141,
  GridiconTypeReadMore = 142,
  GridiconTypeReaderFollowConversation = 143,
  GridiconTypeReaderFollow = 144,
  GridiconTypeReaderFollowingConversation = 145,
  GridiconTypeReaderFollowing = 146,
  GridiconTypeReader = 147,
  GridiconTypeReblog = 148,
  GridiconTypeRedo = 149,
  GridiconTypeRefresh = 150,
  GridiconTypeRefund = 151,
  GridiconTypeReply = 152,
  GridiconTypeResize = 153,
  GridiconTypeRotate = 154,
  GridiconTypeScheduled = 155,
  GridiconTypeSearch = 156,
  GridiconTypeShareComputer = 157,
  GridiconTypeShareiOS = 158,
  GridiconTypeShare = 159,
  GridiconTypeShipping = 160,
  GridiconTypeShutter = 161,
  GridiconTypeSignOut = 162,
  GridiconTypeSite = 163,
  GridiconTypeSpam = 164,
  GridiconTypeSpeaker = 165,
  GridiconTypeSpecialCharacter = 166,
  GridiconTypeStarOutline = 167,
  GridiconTypeStar = 168,
  GridiconTypeStatsAlt = 169,
  GridiconTypeStatsDownAlt = 170,
  GridiconTypeStatsDown = 171,
  GridiconTypeStatsUpAlt = 172,
  GridiconTypeStatsUp = 173,
  GridiconTypeStats = 174,
  GridiconTypeStatus = 175,
  GridiconTypeStory = 176,
  GridiconTypeStrikethrough = 177,
  GridiconTypeSync = 178,
  GridiconTypeTablet = 179,
  GridiconTypeTag = 180,
  GridiconTypeTextColor = 181,
  GridiconTypeThemes = 182,
  GridiconTypeThumbsUp = 183,
  GridiconTypeTime = 184,
  GridiconTypeTrash = 185,
  GridiconTypeTrophy = 186,
  GridiconTypeTypes = 187,
  GridiconTypeUnderline = 188,
  GridiconTypeUndo = 189,
  GridiconTypeUserAdd = 190,
  GridiconTypeUserCircle = 191,
  GridiconTypeUser = 192,
  GridiconTypeVideoCamera = 193,
  GridiconTypeVideoRemove = 194,
  GridiconTypeVideo = 195,
  GridiconTypeVisible = 196,
  GridiconTypeZoomIn = 197,
  GridiconTypeZoomOut = 198,
};


@interface UIImage (SWIFT_EXTENSION(Gridicons))
///
/// returns:
/// A template image of the specified Gridicon type, at the default size.
+ (UIImage * _Nonnull)gridiconOfType:(enum GridiconType)type SWIFT_WARN_UNUSED_RESULT;
+ (UIImage * _Nonnull)gridiconOfType:(enum GridiconType)type withSize:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif

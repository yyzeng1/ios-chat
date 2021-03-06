// Generated by Apple Swift version 5.3 (swiftlang-1200.0.29.2 clang-1200.0.30.1)
#ifndef ZLPHOTOBROWSER_SWIFT_H
#define ZLPHOTOBROWSER_SWIFT_H
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
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

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

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
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
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVFoundation;
@import CoreGraphics;
@import CoreMedia;
@import Foundation;
@import ObjectiveC;
@import Photos;
@import QuartzCore;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ZLPhotoBrowser",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif





@class UIEvent;

@interface UIControl (SWIFT_EXTENSION(ZLPhotoBrowser))
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
@end




@class UIImage;
@class NSCoder;
@class CAAnimation;
@class NSBundle;

SWIFT_CLASS("_TtC14ZLPhotoBrowser14ZLCustomCamera")
@interface ZLCustomCamera : UIViewController <CAAnimationDelegate>
@property (nonatomic, copy) void (^ _Nullable takeDoneBlock)(UIImage * _Nullable, NSURL * _Nullable);
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (void)animationDidStop:(CAAnimation * _Nonnull)anim finished:(BOOL)flag;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

@class AVCapturePhotoOutput;
@class AVCaptureResolvedPhotoSettings;
@class AVCaptureBracketedStillImageSettings;

@interface ZLCustomCamera (SWIFT_EXTENSION(ZLPhotoBrowser)) <AVCapturePhotoCaptureDelegate>
- (void)captureOutput:(AVCapturePhotoOutput * _Nonnull)output didFinishProcessingPhotoSampleBuffer:(CMSampleBufferRef _Nullable)photoSampleBuffer previewPhotoSampleBuffer:(CMSampleBufferRef _Nullable)previewPhotoSampleBuffer resolvedSettings:(AVCaptureResolvedPhotoSettings * _Nonnull)resolvedSettings bracketSettings:(AVCaptureBracketedStillImageSettings * _Nullable)bracketSettings error:(NSError * _Nullable)error;
@end

@class AVCaptureFileOutput;
@class AVCaptureConnection;

@interface ZLCustomCamera (SWIFT_EXTENSION(ZLPhotoBrowser)) <AVCaptureFileOutputRecordingDelegate>
- (void)captureOutput:(AVCaptureFileOutput * _Nonnull)output didStartRecordingToOutputFileAtURL:(NSURL * _Nonnull)fileURL fromConnections:(NSArray<AVCaptureConnection *> * _Nonnull)connections;
- (void)captureOutput:(AVCaptureFileOutput * _Nonnull)output didFinishRecordingToOutputFileAtURL:(NSURL * _Nonnull)outputFileURL fromConnections:(NSArray<AVCaptureConnection *> * _Nonnull)connections error:(NSError * _Nullable)error;
@end

@class UIGestureRecognizer;
@class UITouch;

@interface ZLCustomCamera (SWIFT_EXTENSION(ZLPhotoBrowser)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldReceiveTouch:(UITouch * _Nonnull)touch SWIFT_WARN_UNUSED_RESULT;
@end


@interface ZLCustomCamera (SWIFT_EXTENSION(ZLPhotoBrowser))
@end

typedef SWIFT_ENUM(NSInteger, CaptureSessionPreset, closed) {
  CaptureSessionPresetCif352x288 = 0,
  CaptureSessionPresetVga640x480 = 1,
  CaptureSessionPresetHd1280x720 = 2,
  CaptureSessionPresetHd1920x1080 = 3,
  CaptureSessionPresetHd4K3840x2160 = 4,
};

typedef SWIFT_ENUM(NSInteger, CameraFlashMode, closed) {
  CameraFlashModeAuto = 0,
  CameraFlashModeOn = 1,
  CameraFlashModeOff = 2,
};

typedef SWIFT_ENUM(NSInteger, VideoExportType, closed) {
  VideoExportTypeMov = 0,
  VideoExportTypeMp4 = 1,
};


SWIFT_CLASS("_TtC14ZLPhotoBrowser10ZLDrawPath")
@interface ZLDrawPath : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14ZLPhotoBrowser16ZLEditImageModel")
@interface ZLEditImageModel : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14ZLPhotoBrowser25ZLEditImageViewController")
@interface ZLEditImageViewController : UIViewController
@property (nonatomic, copy) void (^ _Nullable editFinishBlock)(UIImage * _Nonnull, ZLEditImageModel * _Nonnull);
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
- (nonnull instancetype)initWithImage:(UIImage * _Nonnull)image editModel:(ZLEditImageModel * _Nullable)editModel OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end



@interface ZLEditImageViewController (SWIFT_EXTENSION(ZLPhotoBrowser)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end

@class UICollectionView;
@class UICollectionViewCell;

@interface ZLEditImageViewController (SWIFT_EXTENSION(ZLPhotoBrowser)) <UICollectionViewDataSource, UICollectionViewDelegate>
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class UIScrollView;
@class UIView;

@interface ZLEditImageViewController (SWIFT_EXTENSION(ZLPhotoBrowser)) <UIScrollViewDelegate>
- (UIView * _Nullable)viewForZoomingInScrollView:(UIScrollView * _Nonnull)scrollView SWIFT_WARN_UNUSED_RESULT;
- (void)scrollViewDidZoom:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndZooming:(UIScrollView * _Nonnull)scrollView withView:(UIView * _Nullable)view atScale:(CGFloat)scale;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndDragging:(UIScrollView * _Nonnull)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView * _Nonnull)scrollView;
@end

@class AVAsset;

SWIFT_CLASS("_TtC14ZLPhotoBrowser25ZLEditVideoViewController")
@interface ZLEditVideoViewController : UIViewController
@property (nonatomic, copy) void (^ _Nullable editFinishBlock)(NSURL * _Nonnull);
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
/// initialize
/// \param avAsset AVAsset对象，需要传入本地视频，网络视频不支持
///
/// \param animateDismiss 退出界面时是否显示dismiss动画
///
- (nonnull instancetype)initWithAvAsset:(AVAsset * _Nonnull)avAsset animateDismiss:(BOOL)animateDismiss OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@interface ZLEditVideoViewController (SWIFT_EXTENSION(ZLPhotoBrowser)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end

@class UICollectionViewLayout;

@interface ZLEditVideoViewController (SWIFT_EXTENSION(ZLPhotoBrowser)) <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndDragging:(UIScrollView * _Nonnull)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
- (UIEdgeInsets)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout insetForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView willDisplayCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

enum ZLFilterType : NSInteger;

SWIFT_CLASS("_TtC14ZLPhotoBrowser8ZLFilter")
@interface ZLFilter : NSObject
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name filterType:(enum ZLFilterType)filterType OBJC_DESIGNATED_INITIALIZER;
/// 可传入 applier 自定义滤镜
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name applier:(UIImage * _Nonnull (^ _Nullable)(UIImage * _Nonnull))applier OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@interface ZLFilter (SWIFT_EXTENSION(ZLPhotoBrowser))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<ZLFilter *> * _Nonnull all;)
+ (NSArray<ZLFilter *> * _Nonnull)all SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLFilter * _Nonnull normal;)
+ (ZLFilter * _Nonnull)normal SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLFilter * _Nonnull clarendon;)
+ (ZLFilter * _Nonnull)clarendon SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLFilter * _Nonnull nashville;)
+ (ZLFilter * _Nonnull)nashville SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLFilter * _Nonnull apply1977;)
+ (ZLFilter * _Nonnull)apply1977 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLFilter * _Nonnull toaster;)
+ (ZLFilter * _Nonnull)toaster SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLFilter * _Nonnull chrome;)
+ (ZLFilter * _Nonnull)chrome SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLFilter * _Nonnull fade;)
+ (ZLFilter * _Nonnull)fade SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLFilter * _Nonnull instant;)
+ (ZLFilter * _Nonnull)instant SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLFilter * _Nonnull process;)
+ (ZLFilter * _Nonnull)process SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLFilter * _Nonnull transfer;)
+ (ZLFilter * _Nonnull)transfer SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLFilter * _Nonnull tone;)
+ (ZLFilter * _Nonnull)tone SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLFilter * _Nonnull linear;)
+ (ZLFilter * _Nonnull)linear SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLFilter * _Nonnull sepia;)
+ (ZLFilter * _Nonnull)sepia SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLFilter * _Nonnull mono;)
+ (ZLFilter * _Nonnull)mono SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLFilter * _Nonnull noir;)
+ (ZLFilter * _Nonnull)noir SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLFilter * _Nonnull tonal;)
+ (ZLFilter * _Nonnull)tonal SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, ZLFilterType, closed) {
  ZLFilterTypeNormal = 0,
  ZLFilterTypeChrome = 1,
  ZLFilterTypeFade = 2,
  ZLFilterTypeInstant = 3,
  ZLFilterTypeProcess = 4,
  ZLFilterTypeTransfer = 5,
  ZLFilterTypeTone = 6,
  ZLFilterTypeLinear = 7,
  ZLFilterTypeSepia = 8,
  ZLFilterTypeMono = 9,
  ZLFilterTypeNoir = 10,
  ZLFilterTypeTonal = 11,
};


SWIFT_CLASS("_TtC14ZLPhotoBrowser16ZLImageClipRatio")
@interface ZLImageClipRatio : NSObject
- (nonnull instancetype)initWithTitle:(NSString * _Nonnull)title whRatio:(CGFloat)whRatio OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface ZLImageClipRatio (SWIFT_EXTENSION(ZLPhotoBrowser))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLImageClipRatio * _Nonnull custom;)
+ (ZLImageClipRatio * _Nonnull)custom SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLImageClipRatio * _Nonnull wh1x1;)
+ (ZLImageClipRatio * _Nonnull)wh1x1 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLImageClipRatio * _Nonnull wh3x4;)
+ (ZLImageClipRatio * _Nonnull)wh3x4 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLImageClipRatio * _Nonnull wh4x3;)
+ (ZLImageClipRatio * _Nonnull)wh4x3 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLImageClipRatio * _Nonnull wh2x3;)
+ (ZLImageClipRatio * _Nonnull)wh2x3 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLImageClipRatio * _Nonnull wh3x2;)
+ (ZLImageClipRatio * _Nonnull)wh3x2 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLImageClipRatio * _Nonnull wh9x16;)
+ (ZLImageClipRatio * _Nonnull)wh9x16 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZLImageClipRatio * _Nonnull wh16x9;)
+ (ZLImageClipRatio * _Nonnull)wh16x9 SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, ZLLanguageType, closed) {
  ZLLanguageTypeSystem = 0,
  ZLLanguageTypeChineseSimplified = 1,
  ZLLanguageTypeChineseTraditional = 2,
  ZLLanguageTypeEnglish = 3,
  ZLLanguageTypeJapanese = 4,
};


SWIFT_CLASS("_TtC14ZLPhotoBrowser12ZLMosaicPath")
@interface ZLMosaicPath : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, ZLPhotoBrowserStyle, closed) {
/// 相册列表嵌入在小图界面导航上，点击下拉显示
  ZLPhotoBrowserStyleEmbedAlbumList = 0,
/// 相册列表和小图界面之间显示关系为push
  ZLPhotoBrowserStyleExternalAlbumList = 1,
};

@class UIColor;
enum HUDStyle : NSInteger;
@class UIBlurEffect;
@class ZLPhotoThemeColorDeploy;

SWIFT_CLASS("_TtC14ZLPhotoBrowser20ZLPhotoConfiguration")
@interface ZLPhotoConfiguration : NSObject
+ (ZLPhotoConfiguration * _Nonnull)default SWIFT_WARN_UNUSED_RESULT;
/// 框架内部选择样式
@property (nonatomic) enum ZLPhotoBrowserStyle style;
/// 状态栏样式
@property (nonatomic) UIStatusBarStyle statusBarStyle;
/// 是否升序排列，预览界面不受该参数影响
@property (nonatomic) BOOL sortAscending;
@property (nonatomic) NSInteger maxSelectCount;
/// 混合选择时，照片和视频是否可以同时选择，默认true
/// <ul>
///   <li>
///     希望选择视频（最多1个）后不能选择其他图片，或者选择图片（最多9张）后不能选择视频
///     设置如下参数即可
///   </li>
/// </ul>
/// \code
/// allowSelectImage = true
/// allowSelectVideo = true
/// maxSelectCount = 9
/// allowMixSelect = false
///
/// \endcode
@property (nonatomic) BOOL allowMixSelect;
/// 预览图最大显示数，该值为0时将不显示上方预览图，仅显示 ‘拍照、相册、取消’ 按钮
@property (nonatomic) NSInteger maxPreviewCount;
/// cell的圆角弧度
@property (nonatomic) CGFloat cellCornerRadio;
/// 是否允许选择图片
@property (nonatomic) BOOL allowSelectImage;
/// 是否允许选择视频
@property (nonatomic) BOOL allowSelectVideo;
/// 是否允许选择Gif，只是控制是否选择，并不控制是否显示，如果为NO，则不显示gif标识
@property (nonatomic) BOOL allowSelectGif;
/// 是否允许选择livePhoto，只是控制是否选择，并不控制是否显示，如果为NO，则不显示livePhoto标识
@property (nonatomic) BOOL allowSelectLivePhoto;
/// 是否允许相册内部拍照
/// warning:
/// 如果allowTakePhoto和allowRecordVideo均为false，则不会显示
@property (nonatomic) BOOL allowTakePhotoInLibrary;
/// 是否允许编辑图片，图片可允许编辑多张
@property (nonatomic) BOOL allowEditImage;
/// 是否允许编辑视频
/// warning:
/// 视频只能在没有选择任何照片的情况下，或仅选择一个视频的情况下编辑，编辑完成后立即执行选择回调
@property (nonatomic) BOOL allowEditVideo;
/// 是否允许滑动选择
@property (nonatomic) BOOL allowSlideSelect;
/// 预览界面是否允许拖拽选择
@property (nonatomic) BOOL allowDragSelect;
/// 是否允许选择原图
@property (nonatomic) BOOL allowSelectOriginal;
/// 是否允许预览已选择的照片 (小图界面预览按钮)
@property (nonatomic) BOOL allowPreviewSelectedPhotos;
/// 是否允许进入预览大图界面 (即点击小图后是否允许进入大图界面)
@property (nonatomic) BOOL allowPreviewPhotos;
/// iPhone竖屏时 一行显示几张图片，最小2列，最大6列，默认4列
/// \code
/// iPhone横屏时 列数为 columnCount+2
/// iPad竖屏时 列数为 columnCount+2
/// iPad横屏时 列数为 columnCount+4
///
/// \endcode
@property (nonatomic) NSInteger columnCount;
/// 编辑视频时最大裁剪时间，单位：秒，默认10s
@property (nonatomic) NSInteger maxEditVideoTime;
/// 允许选择视频的最大时长
@property (nonatomic) NSInteger maxSelectVideoDuration;
/// 允许选择视频的最小时长
@property (nonatomic) NSInteger minSelectVideoDuration;
/// 编辑图片涂鸦颜色
@property (nonatomic, copy) NSArray<UIColor *> * _Nonnull editImageDrawColors;
/// 编辑图片涂鸦默认颜色
@property (nonatomic, strong) UIColor * _Nonnull editImageDefaultDrawColor;
/// 编辑图片裁剪比例
@property (nonatomic, copy) NSArray<ZLImageClipRatio *> * _Nonnull editImageClipRatios;
/// 滤镜
@property (nonatomic, copy) NSArray<ZLFilter *> * _Nonnull filters;
/// 在小图界面选择 图片/视频 后直接进入编辑界面
/// <ul>
///   <li>
///     discussion: 编辑图片 仅在allowEditImage为YES 且 maxSelectCount为1 的情况下，置为YES有效，
///     编辑视频则在 allowEditVideo为YES 且 maxSelectCount为1情况下，置为YES有效
///   </li>
/// </ul>
@property (nonatomic) BOOL editAfterSelectThumbnailImage;
/// 编辑图片后是否保存编辑后的图片至相册
@property (nonatomic) BOOL saveNewImageAfterEdit;
/// 是否在相册内部拍照按钮上面实时显示相机俘获的影像
@property (nonatomic) BOOL showCaptureImageOnTakePhotoBtn;
/// 控制单选模式下，是否显示选择按钮，多选模式不受控制
@property (nonatomic) BOOL showSelectBtnWhenSingleSelect;
/// 是否在已选择的图片上方覆盖一层已选中遮罩层
@property (nonatomic) BOOL showSelectedMask;
/// 是否在已选择的图片cell上显示边框
@property (nonatomic) BOOL showSelectedBorder;
/// 是否在不能选择的cell上方覆盖一层遮罩层
@property (nonatomic) BOOL showInvalidMask;
/// 是否显示选中图片的index
@property (nonatomic) BOOL showSelectedIndex;
/// 是否在预览界面下方显示已选择的照片
@property (nonatomic) BOOL showSelectedPhotoPreview;
/// 支持开发者自定义图片，但是所自定义图片资源名称必须与被替换的bundle中的图片名称一致
/// <ul>
///   <li>
///     example: 开发者需要替换选中与未选中的图片资源，则需要传入的数组为
///     [“zl_btn_selected”, “zl_btn_unselected”]，
///     则框架内会使用开发者项目中的图片资源，而其他图片则用框架bundle中的资源
///   </li>
/// </ul>
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull customImageNames;
/// 回调时候是否允许框架解析图片，默认YES
/// discussion 如果选择了大量图片，框架一下解析大量图片会耗费一些内存，
/// 开发者此时可置为NO，拿到assets数组后使用 ZLPhotoManager 中提供的 “anialysisAssets:original:completion:” 方法进行逐个解析，
/// 以达到缓解内存瞬间暴涨的效果，该值为NO时，回调的图片数组为nil
@property (nonatomic) BOOL shouldAnialysisAsset;
/// 解析图片超时时间
@property (nonatomic) NSTimeInterval timeout;
/// 框架语言
@property (nonatomic) enum ZLLanguageType languageType;
/// 支持开发者自定义多语言提示（提供给oc使用）
/// warning:
/// 更改时请注意多语言中包含的占位符，如%ld、%@
/// <ul>
///   <li>
///     example: 开发者需要替换
///     key: @“loading”, value: @“正在处理…” 的多语言
///     则需要传入的字典为 @[@“loading”: @“需要替换的文字”]
///     而其他多语言则用框架中的
///   </li>
/// </ul>
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull customLanguageKeyValue_objc;
/// 使用自定义相机相机
@property (nonatomic) BOOL useCustomCamera;
/// 是否允许拍照 (需要allowSelectImage为true)
@property (nonatomic) BOOL allowTakePhoto;
/// 是否允许录制视频 (需要allowSelectVideo为true)
@property (nonatomic) BOOL allowRecordVideo;
/// 最小录制时长，默认 0s
@property (nonatomic) NSInteger minRecordDuration;
/// 最大录制时长，默认 10s，最小为 1s
@property (nonatomic) NSInteger maxRecordDuration;
/// 视频分辨率
@property (nonatomic) enum CaptureSessionPreset sessionPreset;
/// 录制视频及编辑视频时候的视频导出格式
@property (nonatomic) enum VideoExportType videoExportType;
/// 闪光灯设置
@property (nonatomic) enum CameraFlashMode cameraFlashMode;
/// hud style
@property (nonatomic) enum HUDStyle hudStyle;
/// 导航条模糊样式
@property (nonatomic, strong) UIBlurEffect * _Nullable navViewBlurEffect;
/// 下方工具条模糊样式
@property (nonatomic, strong) UIBlurEffect * _Nullable bottomToolViewBlurEffect;
/// 框架主题颜色配置
@property (nonatomic, strong) ZLPhotoThemeColorDeploy * _Nonnull themeColorDeploy;
/// 框架字体
@property (nonatomic, copy) NSString * _Nullable themeFontName;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class PHAsset;

SWIFT_CLASS("_TtC14ZLPhotoBrowser14ZLPhotoManager")
@interface ZLPhotoManager : NSObject
/// 保存图片到相册
+ (void)saveImageToAlbumWithImage:(UIImage * _Nonnull)image completion:(void (^ _Nullable)(BOOL, PHAsset * _Nullable))completion;
/// 保存视频到相册
+ (void)saveVideoToAblumWithUrl:(NSURL * _Nonnull)url completion:(void (^ _Nullable)(BOOL, PHAsset * _Nullable))completion;
+ (PHImageRequestID)fetchAVAssetForVideo:(PHAsset * _Nonnull)asset completion:(void (^ _Nonnull)(AVAsset * _Nullable, NSDictionary * _Nullable))completion SWIFT_WARN_UNUSED_RESULT;
/// 获取 asset 本地路径
+ (void)fetchAssetFilePathWithAsset:(PHAsset * _Nonnull)asset completion:(void (^ _Nonnull)(NSString * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC14ZLPhotoBrowser19ZLPhotoPreviewSheet")
@interface ZLPhotoPreviewSheet : UIView
/// 解析成功的照片回调  参数为: 1.解析好的图片 2.对应asset 3.是否原图
@property (nonatomic, copy) void (^ _Nullable selectImageBlock)(NSArray<UIImage *> * _Nonnull, NSArray<PHAsset *> * _Nonnull, BOOL);
/// 解析失败的照片回调  参数: 1.失败的asset 2.对应的下标
@property (nonatomic, copy) void (^ _Nullable selectImageRequestErrorBlock)(NSArray<PHAsset *> * _Nonnull, NSArray<NSNumber *> * _Nonnull);
/// 取消选择回调
@property (nonatomic, copy) void (^ _Nullable cancelBlock)(void);
- (nonnull instancetype)initWithSelectedAssets:(NSArray<PHAsset *> * _Nonnull)selectedAssets OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (void)showPreviewWithAnimate:(BOOL)animate sender:(UIViewController * _Nonnull)sender;
- (void)showPhotoLibraryWithSender:(UIViewController * _Nonnull)sender;
/// 传入已选择的assets，并预览
- (void)previewAssetsWithSender:(UIViewController * _Nonnull)sender assets:(NSArray<PHAsset *> * _Nonnull)assets index:(NSInteger)index isOriginal:(BOOL)isOriginal showBottomViewAndSelectBtn:(BOOL)showBottomViewAndSelectBtn;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class PHChange;

@interface ZLPhotoPreviewSheet (SWIFT_EXTENSION(ZLPhotoBrowser)) <PHPhotoLibraryChangeObserver>
- (void)photoLibraryDidChange:(PHChange * _Nonnull)changeInstance;
@end

@class UIImagePickerController;

@interface ZLPhotoPreviewSheet (SWIFT_EXTENSION(ZLPhotoBrowser)) <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
- (void)imagePickerController:(UIImagePickerController * _Nonnull)picker didFinishPickingMediaWithInfo:(NSDictionary<UIImagePickerControllerInfoKey, id> * _Nonnull)info;
@end


@interface ZLPhotoPreviewSheet (SWIFT_EXTENSION(ZLPhotoBrowser)) <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView willDisplayCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


/// 框架内主题颜色配置
SWIFT_CLASS("_TtC14ZLPhotoBrowser23ZLPhotoThemeColorDeploy")
@interface ZLPhotoThemeColorDeploy : NSObject
+ (ZLPhotoThemeColorDeploy * _Nonnull)default SWIFT_WARN_UNUSED_RESULT;
/// 预览快速选择模式下 上方透明背景色
@property (nonatomic, strong) UIColor * _Nonnull previewBgColor;
/// 预览快速选择模式下 拍照/相册/取消 的背景颜色
@property (nonatomic, strong) UIColor * _Nonnull previewBtnBgColor;
/// 预览快速选择模式下 拍照/相册/取消 的字体颜色
@property (nonatomic, strong) UIColor * _Nonnull previewBtnTitleColor;
/// 预览快速选择模式下 选择照片大于0时，取消按钮title颜色
@property (nonatomic, strong) UIColor * _Nonnull previewBtnHighlightTitleColor;
/// 导航条颜色
@property (nonatomic, strong) UIColor * _Nonnull navBarColor;
/// 导航标题颜色
@property (nonatomic, strong) UIColor * _Nonnull navTitleColor;
/// 框架样式为 embedAlbumList 时，title view 背景色
@property (nonatomic, strong) UIColor * _Nonnull navEmbedTitleViewBgColor;
/// 相册列表界面背景色
@property (nonatomic, strong) UIColor * _Nonnull albumListBgColor;
/// 相册列表界面 相册title颜色
@property (nonatomic, strong) UIColor * _Nonnull albumListTitleColor;
/// 相册列表界面 数量label颜色
@property (nonatomic, strong) UIColor * _Nonnull albumListCountColor;
/// 分割线颜色
@property (nonatomic, strong) UIColor * _Nonnull separatorColor;
/// 小图界面背景色
@property (nonatomic, strong) UIColor * _Nonnull thumbnailBgColor;
/// 底部工具条底色
@property (nonatomic, strong) UIColor * _Nonnull bottomToolViewBgColor;
/// 底部工具栏按钮 可交互 状态标题颜色
@property (nonatomic, strong) UIColor * _Nonnull bottomToolViewBtnNormalTitleColor;
/// 底部工具栏按钮 不可交互 状态标题颜色
@property (nonatomic, strong) UIColor * _Nonnull bottomToolViewBtnDisableTitleColor;
/// 底部工具栏按钮 可交互 状态背景颜色
@property (nonatomic, strong) UIColor * _Nonnull bottomToolViewBtnNormalBgColor;
/// 底部工具栏按钮 不可交互 状态背景颜色
@property (nonatomic, strong) UIColor * _Nonnull bottomToolViewBtnDisableBgColor;
/// 自定义相机录制视频时，进度条颜色
@property (nonatomic, strong) UIColor * _Nonnull cameraRecodeProgressColor;
/// 已选cell遮罩层颜色
@property (nonatomic, strong) UIColor * _Nonnull selectedMaskColor;
/// 已选cell border颜色
@property (nonatomic, strong) UIColor * _Nonnull selectedBorderColor;
/// 不能选择的cell上方遮罩层颜色
@property (nonatomic, strong) UIColor * _Nonnull invalidMaskColor;
/// 选中图片右上角index background color
@property (nonatomic, strong) UIColor * _Nonnull indexLabelBgColor;
/// 拍照cell 背景颜色
@property (nonatomic, strong) UIColor * _Nonnull cameraCellBgColor;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14ZLPhotoBrowser13ZLProgressHUD")
@interface ZLProgressHUD : UIView
- (nonnull instancetype)initWithStyle:(enum HUDStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)showWithTimeout:(NSTimeInterval)timeout;
- (void)hide;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

typedef SWIFT_ENUM(NSInteger, HUDStyle, closed) {
  HUDStyleLight = 0,
  HUDStyleLightBlur = 1,
  HUDStyleDark = 2,
  HUDStyleDarkBlur = 3,
};


SWIFT_CLASS("_TtC14ZLPhotoBrowser14ZLVideoManager")
@interface ZLVideoManager : NSObject
+ (void)exportEditVideoFor:(AVAsset * _Nonnull)asset range:(CMTimeRange)range completion:(void (^ _Nonnull)(NSURL * _Nullable, NSError * _Nullable))completion;
/// 没有针对不同分辨率视频做处理，仅用于处理相机拍照的视频
+ (void)mergeVideosWithFileUrls:(NSArray<NSURL *> * _Nonnull)fileUrls completion:(void (^ _Nonnull)(NSURL * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

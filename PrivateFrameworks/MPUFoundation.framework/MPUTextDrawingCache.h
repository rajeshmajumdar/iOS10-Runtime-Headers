/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUTextDrawingCache : NSObject {
    id /* block */  _attributedTextProvider;
    NSCache * _cache;
    float  _displayScale;
    unsigned int  _invalidationNotificationCoalescingRequestsCount;
    NSHashTable * _invalidationObservers;
    unsigned int  _maximumNumberOfLines;
    BOOL  _opaque;
    NSOperationQueue * _preHeatingOperationQueue;
    NSStringDrawingContext * _reusableStringDrawingContext;
    MPUTextDrawingCacheKey * _reusableTextDrawingCacheKey;
    NSDictionary * _textAttributes;
    BOOL  _usesImageCachingInsteadOfStringDrawingContextCaching;
    BOOL  _wasInvalidatedWithoutNotifyingObservers;
}

@property (nonatomic, copy) id /* block */ attributedTextProvider;
@property (nonatomic) float displayScale;
@property (nonatomic) unsigned int maximumNumberOfLines;
@property (getter=_isOpaque, setter=_setOpaque:, nonatomic) BOOL opaque;
@property (nonatomic, copy) NSDictionary *textAttributes;
@property (getter=_usesImageCachingInsteadOfStringDrawingContextCaching, setter=_setUsesImageCachingInsteadOfStringDrawingContextCaching:, nonatomic) BOOL usesImageCachingInsteadOfStringDrawingContextCaching;

+ (id)_drawingContextForText:(id)arg1 allowedSize:(struct CGSize { float x1; float x2; })arg2 fromCache:(id)arg3 usingReusableStringDrawingContext:(id)arg4 reusableTextDrawingCacheKey:(id)arg5 textAttributes:(id)arg6 maximumNumberOfLines:(unsigned int)arg7 opaque:(BOOL)arg8 displayScale:(float)arg9 attributedTextProvider:(id /* block */)arg10;
+ (void)_updateStringDrawingContext:(id)arg1 withMaximumNumberOfLines:(unsigned int)arg2;
+ (struct CGSize { float x1; float x2; })_validateAllowedSize:(struct CGSize { float x1; float x2; })arg1;

- (void).cxx_destruct;
- (void)_invalidate;
- (BOOL)_isOpaque;
- (void)_notifyInvalidationObservers;
- (void)_setOpaque:(BOOL)arg1;
- (void)_setUsesImageCachingInsteadOfStringDrawingContextCaching:(BOOL)arg1;
- (BOOL)_usesImageCachingInsteadOfStringDrawingContextCaching;
- (void)addInvalidationObserver:(id)arg1;
- (id /* block */)attributedTextProvider;
- (void)beginCoalescingInvalidationNotifications;
- (void)dealloc;
- (float)displayScale;
- (id)drawingContextForText:(id)arg1 allowedSize:(struct CGSize { float x1; float x2; })arg2;
- (void)endCoalescingInvalidationNotifications;
- (id)init;
- (unsigned int)maximumNumberOfLines;
- (void)preHeatForStrings:(id)arg1 allowedSize:(struct CGSize { float x1; float x2; })arg2;
- (void)removeInvalidationObserver:(id)arg1;
- (void)setAttributedTextProvider:(id /* block */)arg1;
- (void)setDisplayScale:(float)arg1;
- (void)setMaximumNumberOfLines:(unsigned int)arg1;
- (void)setTextAttributes:(id)arg1;
- (id)textAttributes;

@end

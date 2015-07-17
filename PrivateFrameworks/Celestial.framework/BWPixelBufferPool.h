/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWPixelBufferPool : NSObject {
    NSDictionary * _additionalPixelBufferAttributes;
    unsigned long  _capacity;
    BOOL  _clientProvidesPool;
    NSString * _name;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    NSDictionary * _pixelBufferPoolAuxAttributes;
    long  _pixelBufferPoolCreateError;
    long  _pixelBufferPoolOnce;
    BWVideoFormat * _videoFormat;
}

@property (nonatomic, readonly) unsigned long capacity;
@property (nonatomic, readonly) struct __CVPixelBufferPool { }*cvPixelBufferPool;
@property (nonatomic, readonly) struct __CFDictionary { }*cvPixelBufferPoolAuxAttributes;

+ (void)initialize;

- (long)_ensurePool;
- (unsigned long)capacity;
- (struct __CVPixelBufferPool { }*)cvPixelBufferPool;
- (struct __CFDictionary { }*)cvPixelBufferPoolAuxAttributes;
- (void)dealloc;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long)arg2 name:(id)arg3;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long)arg2 name:(id)arg3 additionalPixelBufferAttributes:(id)arg4;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long)arg2 name:(id)arg3 clientProvidesPool:(BOOL)arg4;
- (struct __CVBuffer { }*)newPixelBuffer;
- (long)preallocate;
- (void)preallocateWithCompletionHandler:(id /* block */)arg1;
- (void)prefetchWithCompletionHandler:(id /* block */)arg1;
- (void)setCVPixelBufferPool:(struct __CVPixelBufferPool { }*)arg1 attributes:(struct __CFDictionary { }*)arg2;

@end

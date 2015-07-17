/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVideoFormat : BWFormat {
    unsigned long  _bytesPerRowAlignment;
    unsigned int  _cacheMode;
    unsigned long  _extendedHeight;
    unsigned long  _extendedWidth;
    unsigned long  _height;
    NSDictionary * _pixelBufferAttributes;
    unsigned long  _pixelFormat;
    unsigned long  _planeAlignment;
    BOOL  _prewireBuffers;
    unsigned long  _width;
}

@property (nonatomic) unsigned long bytesPerRowAlignment;
@property (nonatomic) unsigned int cacheMode;
@property (nonatomic) unsigned long extendedHeight;
@property (nonatomic) unsigned long extendedWidth;
@property (nonatomic) unsigned long height;
@property (nonatomic, readonly) NSDictionary *pixelBufferAttributes;
@property (nonatomic) unsigned long pixelFormat;
@property (nonatomic) unsigned long planeAlignment;
@property (nonatomic) BOOL prewireBuffers;
@property (nonatomic) unsigned long width;

+ (id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2;
+ (id)formatByResolvingRequirements:(id)arg1;
+ (void)initialize;

- (id)_initWithResolvedPixelBufferAttributes:(id)arg1;
- (unsigned long)bytesPerRowAlignment;
- (unsigned int)cacheMode;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long)extendedHeight;
- (unsigned long)extendedWidth;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (unsigned long)height;
- (BOOL)isEqual:(id)arg1;
- (unsigned long)mediaType;
- (id)pixelBufferAttributes;
- (unsigned long)pixelFormat;
- (unsigned long)planeAlignment;
- (BOOL)prewireBuffers;
- (void)setBytesPerRowAlignment:(unsigned long)arg1;
- (void)setCacheMode:(unsigned int)arg1;
- (void)setExtendedHeight:(unsigned long)arg1;
- (void)setExtendedWidth:(unsigned long)arg1;
- (void)setHeight:(unsigned long)arg1;
- (void)setPixelFormat:(unsigned long)arg1;
- (void)setPlaneAlignment:(unsigned long)arg1;
- (void)setPrewireBuffers:(BOOL)arg1;
- (void)setWidth:(unsigned long)arg1;
- (unsigned long)width;

@end
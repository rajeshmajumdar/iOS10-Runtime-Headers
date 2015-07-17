/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CSIBitmapWrapper : NSObject {
    BOOL  _allowsMultiPassEncoding;
    struct CGContext { } * _bitmapContext;
    unsigned int  _height;
    unsigned int  _imageAlpha;
    NSData * _pixelData;
    unsigned int  _pixelFormat;
    NSData * _rawData;
    unsigned long  _rowbytes;
    unsigned int  _width;
}

@property BOOL allowsMultiPassEncoding;
@property (nonatomic) unsigned int pixelFormat;

- (BOOL)allowsMultiPassEncoding;
- (struct CGContext { }*)bitmapContext;
- (id)compressedData:(BOOL)arg1 usedEncoding:(int*)arg2 andRowChunkSize:(unsigned int*)arg3;
- (void)dealloc;
- (void)finalize;
- (unsigned int)height;
- (id)initWithPixelWidth:(unsigned int)arg1 pixelHeight:(unsigned int)arg2;
- (id)pixelData;
- (unsigned int)pixelFormat;
- (unsigned long)rowbytes;
- (void)setAllowsMultiPassEncoding:(BOOL)arg1;
- (void)setPixelData:(id)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setSourceAlphaInfo:(unsigned int)arg1;
- (unsigned int)sourceAlphaInfo;
- (unsigned int)width;

@end

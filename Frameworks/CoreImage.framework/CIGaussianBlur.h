/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIGaussianBlur : CIFilter {
    CIImage * inputImage;
    NSNumber * inputRadius;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)_CIGaussianBlur11;
- (id)_CIGaussianBlur15;
- (id)_CIGaussianBlur19;
- (id)_CIGaussianBlur3;
- (id)_CIGaussianBlur7;
- (id)_CIGaussianReduce2;
- (id)_CIGaussianReduce4;
- (BOOL)_isIdentity;
- (id)inputImage;
- (id)inputRadius;
- (id)outputImage;
- (id)outputImageV1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end

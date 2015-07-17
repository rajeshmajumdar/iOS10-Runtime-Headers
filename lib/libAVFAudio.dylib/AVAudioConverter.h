/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioConverter : NSObject {
    void * _impl;
}

@property (nonatomic, readonly) NSArray *applicableEncodeBitRates;
@property (nonatomic, readonly) NSArray *applicableEncodeSampleRates;
@property (nonatomic, readonly) NSArray *availableEncodeBitRates;
@property (nonatomic, readonly) NSArray *availableEncodeChannelLayoutTags;
@property (nonatomic, readonly) NSArray *availableEncodeSampleRates;
@property (nonatomic) int bitRate;
@property (nonatomic, retain) NSString *bitRateStrategy;
@property (nonatomic, retain) NSArray *channelMap;
@property (nonatomic) BOOL dither;
@property (nonatomic) BOOL downmix;
@property (nonatomic, readonly) AVAudioFormat *inputFormat;
@property (nonatomic, retain) NSData *magicCookie;
@property (nonatomic, readonly) int maximumOutputPacketSize;
@property (nonatomic, readonly) AVAudioFormat *outputFormat;
@property (nonatomic) struct AVAudioConverterPrimeInfo { unsigned int x1; unsigned int x2; } primeInfo;
@property (nonatomic) int primeMethod;
@property (nonatomic, retain) NSString *sampleRateConverterAlgorithm;
@property (nonatomic) int sampleRateConverterQuality;

- (id)applicableEncodeBitRates;
- (id)applicableEncodeSampleRates;
- (id)availableEncodeBitRates;
- (id)availableEncodeChannelLayoutTags;
- (id)availableEncodeSampleRates;
- (int)bitRate;
- (id)bitRateStrategy;
- (id)channelMap;
- (int)convertToBuffer:(id)arg1 error:(id*)arg2 withInputFromBlock:(id /* block */)arg3;
- (BOOL)convertToBuffer:(id)arg1 fromBuffer:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (BOOL)dither;
- (BOOL)downmix;
- (id)initFromFormat:(id)arg1 toFormat:(id)arg2;
- (id)inputFormat;
- (id)magicCookie;
- (int)maximumOutputPacketSize;
- (id)outputFormat;
- (struct AVAudioConverterPrimeInfo { unsigned int x1; unsigned int x2; })primeInfo;
- (int)primeMethod;
- (void)reset;
- (id)sampleRateConverterAlgorithm;
- (int)sampleRateConverterQuality;
- (void)setBitRate:(int)arg1;
- (void)setBitRateStrategy:(id)arg1;
- (void)setChannelMap:(id)arg1;
- (void)setDither:(BOOL)arg1;
- (void)setDownmix:(BOOL)arg1;
- (void)setMagicCookie:(id)arg1;
- (void)setPrimeInfo:(struct AVAudioConverterPrimeInfo { unsigned int x1; unsigned int x2; })arg1;
- (void)setPrimeMethod:(int)arg1;
- (void)setSampleRateConverterAlgorithm:(id)arg1;
- (void)setSampleRateConverterQuality:(int)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface IRFrame : NSObject {
    unsigned int  _count;
    unsigned long long  _timestamp;
    unsigned int * _timings;
}

@property (nonatomic, readonly) unsigned int count;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)count;
- (void)dealloc;
- (void)getTimings:(unsigned int*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithTimings:(const unsigned int*)arg1 count:(unsigned int)arg2 timestamp:(unsigned long long)arg3;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)timeIntervalAtIndex:(unsigned int)arg1;
- (unsigned long long)timestamp;

@end

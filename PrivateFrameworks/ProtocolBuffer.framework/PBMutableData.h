/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBMutableData : NSMutableData {
    char * buffer;
    char * end;
    char * p;
}

- (void)_pb_growCapacityBy:(unsigned int)arg1;
- (const void*)bytes;
- (void)dealloc;
- (id)initWithCapacity:(unsigned int)arg1;
- (unsigned int)length;
- (void*)mutableBytes;
- (void)setLength:(unsigned int)arg1;

@end

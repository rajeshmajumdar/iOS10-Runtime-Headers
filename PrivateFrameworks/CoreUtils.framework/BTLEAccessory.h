/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface BTLEAccessory : NSObject {
    int  _lastRSSI;
    double  _lastSeen;
    NSString * _name;
    CBPeripheral * _peripheral;
}

@property (nonatomic) int RSSI;
@property (nonatomic) double lastSeen;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) CBPeripheral *peripheral;

- (int)RSSI;
- (void)dealloc;
- (id)initWithPeripheral:(id)arg1;
- (double)lastSeen;
- (id)name;
- (id)peripheral;
- (void)setLastSeen:(double)arg1;
- (void)setName:(id)arg1;
- (void)setPeripheral:(id)arg1;
- (void)setRSSI:(int)arg1;

@end

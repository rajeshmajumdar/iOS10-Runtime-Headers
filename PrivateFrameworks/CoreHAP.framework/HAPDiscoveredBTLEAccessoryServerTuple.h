/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPDiscoveredBTLEAccessoryServerTuple : NSObject {
    HAPAccessoryServerBTLE * _accessoryServer;
    double  _lastSeen;
}

@property (nonatomic, retain) HAPAccessoryServerBTLE *accessoryServer;
@property (nonatomic) double lastSeen;

+ (id)discoveredAccessoryServerTupleWithAccessoryServer:(id)arg1;

- (void).cxx_destruct;
- (id)accessoryServer;
- (double)lastSeen;
- (void)setAccessoryServer:(id)arg1;
- (void)setLastSeen:(double)arg1;

@end

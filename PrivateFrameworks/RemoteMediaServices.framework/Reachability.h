/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface Reachability : NSObject {
    BOOL  _alwaysReturnLocalWiFiStatus;
    struct __SCNetworkReachability { } * _reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
+ (id)sharedReachabilityForInternetConnection;

- (BOOL)connectionRequired;
- (int)currentReachabilityStatus;
- (void)dealloc;
- (int)localWiFiStatusForFlags:(unsigned int)arg1;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (BOOL)startNotifier;
- (void)stopNotifier;

@end

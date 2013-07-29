/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableDictionary;

@interface IMPersonRegistrar : NSObject  {
    NSMutableDictionary *_personMap;
}

@property(retain) NSMutableDictionary * _personMap;

+ (id)sharedInstance;

- (void)set_personMap:(id)arg1;
- (id)_personMap;
- (void)_dumpAllPersons;
- (id)personForUniqueID:(id)arg1;
- (void)unregisterPerson:(id)arg1;
- (void)registerPerson:(id)arg1;
- (void)dealloc;

@end
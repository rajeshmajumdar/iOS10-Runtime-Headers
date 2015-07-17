/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKLinguisticDataProvider : RKDataProvider {
    NSMutableDictionary * _polarityMapsByLanguageID;
}

@property (retain) NSMutableDictionary *polarityMapsByLanguageID;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (struct __LSMMap { }*)polarityMapForLanguageID:(id)arg1;
- (id)polarityMapsByLanguageID;
- (void)setPolarityMapsByLanguageID:(id)arg1;

@end

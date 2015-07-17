/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADDefaults : NSObject {
    struct __CFString { } * _defaultsBundleID;
    NSMutableDictionary * _factoryDefaults;
}

@property (nonatomic) struct __CFString { }*defaultsBundleID;
@property (nonatomic, retain) NSMutableDictionary *factoryDefaults;

+ (id)_defaultValueForKey:(id)arg1 valueClass:(Class)arg2;
+ (void)_setDefaultValue:(id)arg1 forKey:(id)arg2;
+ (void)addFactoryDefaults:(id)arg1;
+ (BOOL)boolForKey:(id)arg1;
+ (BOOL)defaultIsSetForKey:(id)arg1;
+ (double)doubleForKey:(id)arg1;
+ (id)factoryDefaults;
+ (int)integerForKey:(id)arg1;
+ (void)setBool:(BOOL)arg1 forKey:(id)arg2;
+ (void)setDouble:(double)arg1 forKey:(id)arg2;
+ (void)setInteger:(int)arg1 forKey:(id)arg2;
+ (void)setString:(id)arg1 forKey:(id)arg2;
+ (id)sharedInstance;
+ (id)stringForKey:(id)arg1;

- (struct __CFString { }*)defaultsBundleID;
- (id)factoryDefaults;
- (id)init;
- (void)setDefaultsBundleID:(struct __CFString { }*)arg1;
- (void)setFactoryDefaults:(id)arg1;

@end

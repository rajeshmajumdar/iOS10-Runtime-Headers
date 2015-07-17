/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSettings : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSMutableCopying> {
    <BSSettingDescriptionProvider> * _descriptionProvider;
    NSMapTable * _settingToFlagMap;
    NSMapTable * _settingToObjectMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <BSSettingDescriptionProvider> *descriptionProvider;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_applyToSettings:(id)arg1;
- (void)_enumerateSettingsForFlagsWithBlock:(id /* block */)arg1;
- (void)_enumerateSettingsForObjectsWithBlock:(id /* block */)arg1;
- (void)_enumerateSettingsInMap:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_keyDescriptionForSetting:(unsigned int)arg1;
- (id)_newMapTable;
- (void)_setFlag:(int)arg1 forSetting:(unsigned int)arg2;
- (void)_setObject:(id)arg1 forSetting:(unsigned int)arg2;
- (id)_valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3 multilinePrefix:(id)arg4;
- (id)allSettings;
- (id)basicDescriptionWithPrefix:(id)arg1;
- (BOOL)boolForSetting:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionProvider;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)enumerateFlagsWithBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithBlock:(id /* block */)arg1;
- (int)flagForSetting:(unsigned int)arg1;
- (unsigned int)hash;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForSetting:(unsigned int)arg1;
- (void)setDescriptionProvider:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGPseudoEventKey : NSObject <SGEntityKey> {
    NSString * _domain;
    NSString * _groupId;
    NSString * _serialized;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *groupId;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)isSupportedEntityType:(long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domain;
- (id)groupId;
- (unsigned int)hash;
- (id)initWithGloballyUniqueId:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPseudoEventKey:(id)arg1;
- (id)keyForEventKitQuery;
- (id)serialize;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAEntity : SADomainObject

@property (nonatomic, copy) NSString *entityType;
@property (nonatomic, copy) NSString *home;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *room;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, copy) NSString *zone;

+ (id)entity;
+ (id)entityWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)entityType;
- (id)groupIdentifier;
- (id)home;
- (id)name;
- (id)room;
- (id)serviceType;
- (void)setEntityType:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRoom:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setZone:(id)arg1;
- (id)zone;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSimpleRestaurantMenuTextGroup : PBCodable <NSCopying> {
    NSMutableArray * _menuItems;
    NSString * _title;
}

@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSMutableArray *menuItems;
@property (nonatomic, retain) NSString *title;

+ (Class)menuItemType;

- (void)addMenuItem:(id)arg1;
- (void)clearMenuItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)menuItemAtIndex:(unsigned long long)arg1;
- (id)menuItems;
- (unsigned long long)menuItemsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMenuItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end

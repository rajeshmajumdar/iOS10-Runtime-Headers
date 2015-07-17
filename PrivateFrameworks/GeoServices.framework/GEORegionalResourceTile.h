/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORegionalResourceTile : PBCodable <NSCopying> {
    NSMutableArray * _attributions;
    NSMutableArray * _childrens;
    NSMutableArray * _iconChecksums;
    NSMutableArray * _icons;
    unsigned int  _x;
    unsigned int  _y;
    unsigned int  _z;
}

@property (nonatomic, retain) NSMutableArray *attributions;
@property (nonatomic, retain) NSMutableArray *childrens;
@property (nonatomic, retain) NSMutableArray *iconChecksums;
@property (nonatomic, retain) NSMutableArray *icons;
@property (nonatomic) unsigned int x;
@property (nonatomic) unsigned int y;
@property (nonatomic) unsigned int z;

- (void)addAttribution:(id)arg1;
- (void)addChildren:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)addIconChecksum:(id)arg1;
- (id)attributionAtIndex:(unsigned int)arg1;
- (id)attributions;
- (unsigned int)attributionsCount;
- (id)childrenAtIndex:(unsigned int)arg1;
- (id)childrens;
- (unsigned int)childrensCount;
- (void)clearAttributions;
- (void)clearChildrens;
- (void)clearIconChecksums;
- (void)clearIcons;
- (BOOL)containsTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (id)iconAtIndex:(unsigned int)arg1;
- (id)iconChecksumAtIndex:(unsigned int)arg1;
- (id)iconChecksums;
- (unsigned int)iconChecksumsCount;
- (id)icons;
- (unsigned int)iconsCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setChildrens:(id)arg1;
- (void)setIconChecksums:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setX:(unsigned int)arg1;
- (void)setY:(unsigned int)arg1;
- (void)setZ:(unsigned int)arg1;
- (void)writeTo:(id)arg1;
- (unsigned int)x;
- (unsigned int)y;
- (unsigned int)z;

@end

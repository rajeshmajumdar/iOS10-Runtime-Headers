/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBSetSectionSubtypeParametersIconRequest : PBRequest <NSCopying> {
    BOOL  _defaultSubtype;
    struct { 
        unsigned int subtypeID : 1; 
        unsigned int defaultSubtype : 1; 
    }  _has;
    BLTPBSectionIcon * _icon;
    NSString * _sectionID;
    unsigned long long  _subtypeID;
}

@property (nonatomic) BOOL defaultSubtype;
@property (nonatomic) BOOL hasDefaultSubtype;
@property (nonatomic, readonly) BOOL hasIcon;
@property (nonatomic, readonly) BOOL hasSectionID;
@property (nonatomic) BOOL hasSubtypeID;
@property (nonatomic, retain) BLTPBSectionIcon *icon;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic) unsigned long long subtypeID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)defaultSubtype;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDefaultSubtype;
- (BOOL)hasIcon;
- (BOOL)hasSectionID;
- (BOOL)hasSubtypeID;
- (unsigned int)hash;
- (id)icon;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sectionID;
- (void)setDefaultSubtype:(BOOL)arg1;
- (void)setHasDefaultSubtype:(BOOL)arg1;
- (void)setHasSubtypeID:(BOOL)arg1;
- (void)setIcon:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSubtypeID:(unsigned long long)arg1;
- (unsigned long long)subtypeID;
- (void)writeTo:(id)arg1;

@end

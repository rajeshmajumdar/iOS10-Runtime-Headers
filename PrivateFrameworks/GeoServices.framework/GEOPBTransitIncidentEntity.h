/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying> {
    unsigned long long  _affectedMuid;
    int  _entityType;
    struct { 
        unsigned int affectedMuid : 1; 
        unsigned int entityType : 1; 
    }  _has;
}

@property (nonatomic) unsigned long long affectedMuid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int entityType;
@property (nonatomic) BOOL hasAffectedMuid;
@property (nonatomic) BOOL hasEntityType;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned long long muid;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

- (unsigned long long)affectedMuid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)entityType;
- (BOOL)hasAffectedMuid;
- (BOOL)hasEntityType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (BOOL)readFrom:(id)arg1;
- (void)setAffectedMuid:(unsigned long long)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasAffectedMuid:(BOOL)arg1;
- (void)setHasEntityType:(BOOL)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end

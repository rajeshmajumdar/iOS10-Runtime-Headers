/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableObject : PBCodable <NSCopying> {
    double  _creationDate;
    struct { 
        unsigned int creationDate : 1; 
    }  _has;
    HDCodableMetadataDictionary * _metadataDictionary;
    NSString * _sourceBundleIdentifier;
    NSData * _uuid;
}

@property (nonatomic) double creationDate;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic, readonly) BOOL hasMetadataDictionary;
@property (nonatomic, readonly) BOOL hasSourceBundleIdentifier;
@property (nonatomic, readonly) BOOL hasUuid;
@property (nonatomic, retain) HDCodableMetadataDictionary *metadataDictionary;
@property (nonatomic, retain) NSString *sourceBundleIdentifier;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)decodedCreationDate;
- (id)decodedMetadata;
- (id)decodedUUID;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCreationDate;
- (BOOL)hasMetadataDictionary;
- (BOOL)hasSourceBundleIdentifier;
- (BOOL)hasUuid;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadataDictionary;
- (BOOL)readFrom:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setHasCreationDate:(BOOL)arg1;
- (void)setMetadataDictionary:(id)arg1;
- (void)setSourceBundleIdentifier:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)sourceBundleIdentifier;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end

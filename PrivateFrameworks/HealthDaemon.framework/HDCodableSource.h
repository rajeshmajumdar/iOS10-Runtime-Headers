/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableSource : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    BOOL  _deleted;
    struct { 
        unsigned int modificationDate : 1; 
        unsigned int options : 1; 
        unsigned int deleted : 1; 
    }  _has;
    double  _modificationDate;
    NSString * _name;
    long long  _options;
    NSString * _productType;
    NSData * _uuid;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) BOOL deleted;
@property (nonatomic, readonly) BOOL hasBundleIdentifier;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic, readonly) BOOL hasProductType;
@property (nonatomic, readonly) BOOL hasUuid;
@property (nonatomic) double modificationDate;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long options;
@property (nonatomic, retain) NSString *productType;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedModificationDate;
- (id)decodedUUID;
- (BOOL)deleted;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBundleIdentifier;
- (BOOL)hasDeleted;
- (BOOL)hasModificationDate;
- (BOOL)hasName;
- (BOOL)hasOptions;
- (BOOL)hasProductType;
- (BOOL)hasUuid;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)modificationDate;
- (id)name;
- (long long)options;
- (id)productType;
- (BOOL)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDeleted:(BOOL)arg1;
- (void)setHasDeleted:(BOOL)arg1;
- (void)setHasModificationDate:(BOOL)arg1;
- (void)setHasOptions:(BOOL)arg1;
- (void)setModificationDate:(double)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setProductType:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end

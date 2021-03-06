/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDeleteFilePermanentlyIntentResponse : PBCodable <NSCopying> {
    bool  _confirm;
    struct { 
        unsigned int confirm : 1; 
        unsigned int success : 1; 
    }  _has;
    bool  _success;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool confirm;
@property (nonatomic) bool hasConfirm;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool success;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (bool)confirm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfirm;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfirm:(bool)arg1;
- (void)setHasConfirm:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

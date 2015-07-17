/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPkiRegisterResponse : PBCodable <NSCopying> {
    CKDPPublicKey * _publicKey;
}

@property (nonatomic, readonly) BOOL hasPublicKey;
@property (nonatomic, retain) CKDPPublicKey *publicKey;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPublicKey;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)publicKey;
- (BOOL)readFrom:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end

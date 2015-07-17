/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoRemovePassRequest : PBRequest <NSCopying> {
    NPKProtoCatalog * _catalog;
    struct { 
        unsigned int lastKnownResyncID : 1; 
        unsigned int resyncID : 1; 
    }  _has;
    unsigned int  _lastKnownResyncID;
    NPKProtoHash * _libraryHash;
    NSString * _passID;
    unsigned int  _resyncID;
}

@property (nonatomic, retain) NPKProtoCatalog *catalog;
@property (nonatomic, readonly) BOOL hasCatalog;
@property (nonatomic) BOOL hasLastKnownResyncID;
@property (nonatomic, readonly) BOOL hasLibraryHash;
@property (nonatomic) BOOL hasResyncID;
@property (nonatomic) unsigned int lastKnownResyncID;
@property (nonatomic, retain) NPKProtoHash *libraryHash;
@property (nonatomic, retain) NSString *passID;
@property (nonatomic) unsigned int resyncID;

- (void).cxx_destruct;
- (id)catalog;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCatalog;
- (BOOL)hasLastKnownResyncID;
- (BOOL)hasLibraryHash;
- (BOOL)hasResyncID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)lastKnownResyncID;
- (id)libraryHash;
- (void)mergeFrom:(id)arg1;
- (id)passID;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)resyncID;
- (void)setCatalog:(id)arg1;
- (void)setHasLastKnownResyncID:(BOOL)arg1;
- (void)setHasResyncID:(BOOL)arg1;
- (void)setLastKnownResyncID:(unsigned int)arg1;
- (void)setLibraryHash:(id)arg1;
- (void)setPassID:(id)arg1;
- (void)setResyncID:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end

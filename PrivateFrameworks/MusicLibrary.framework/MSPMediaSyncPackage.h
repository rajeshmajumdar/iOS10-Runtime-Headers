/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MSPMediaSyncPackage : PBCodable <NSCopying> {
    MSPMediaSyncError * _error;
    struct { 
        unsigned int type : 1; 
        unsigned int lastPackage : 1; 
    }  _has;
    MSPMediaSyncHeader * _header;
    BOOL  _lastPackage;
    MSPMediaSyncOperation * _syncOperation;
    int  _type;
}

@property (nonatomic, retain) MSPMediaSyncError *error;
@property (nonatomic, readonly) BOOL hasError;
@property (nonatomic, readonly) BOOL hasHeader;
@property (nonatomic) BOOL hasLastPackage;
@property (nonatomic, readonly) BOOL hasSyncOperation;
@property (nonatomic) BOOL hasType;
@property (nonatomic, retain) MSPMediaSyncHeader *header;
@property (nonatomic) BOOL lastPackage;
@property (nonatomic, retain) MSPMediaSyncOperation *syncOperation;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (BOOL)hasError;
- (BOOL)hasHeader;
- (BOOL)hasLastPackage;
- (BOOL)hasSyncOperation;
- (BOOL)hasType;
- (unsigned int)hash;
- (id)header;
- (BOOL)isEqual:(id)arg1;
- (BOOL)lastPackage;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHasLastPackage:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setHeader:(id)arg1;
- (void)setLastPackage:(BOOL)arg1;
- (void)setSyncOperation:(id)arg1;
- (void)setType:(int)arg1;
- (id)syncOperation;
- (int)type;
- (void)writeTo:(id)arg1;

@end

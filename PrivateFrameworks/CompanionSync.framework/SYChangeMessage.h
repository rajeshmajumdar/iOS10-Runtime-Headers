/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYChangeMessage : PBCodable <NSCopying> {
    NSMutableArray * _changes;
    SYMessageHeader * _header;
}

@property (nonatomic, retain) NSMutableArray *changes;
@property (nonatomic, retain) SYMessageHeader *header;

- (void).cxx_destruct;
- (void)addChanges:(id)arg1;
- (id)changes;
- (id)changesAtIndex:(unsigned int)arg1;
- (unsigned int)changesCount;
- (void)clearChanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (id)header;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setChanges:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)writeTo:(id)arg1;

@end

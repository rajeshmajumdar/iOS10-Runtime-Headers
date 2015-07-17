/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitSignInstruction : PBCodable <NSCopying> {
    NSMutableArray * _commands;
    NSMutableArray * _details;
    NSMutableArray * _notices;
}

@property (nonatomic, retain) NSMutableArray *commands;
@property (nonatomic, retain) NSMutableArray *details;
@property (nonatomic, retain) NSMutableArray *notices;

- (void)addCommand:(id)arg1;
- (void)addDetail:(id)arg1;
- (void)addNotice:(id)arg1;
- (void)clearCommands;
- (void)clearDetails;
- (void)clearNotices;
- (id)commandAtIndex:(unsigned int)arg1;
- (id)commands;
- (unsigned int)commandsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)detailAtIndex:(unsigned int)arg1;
- (id)details;
- (unsigned int)detailsCount;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)noticeAtIndex:(unsigned int)arg1;
- (id)notices;
- (unsigned int)noticesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setNotices:(id)arg1;
- (void)writeTo:(id)arg1;

@end

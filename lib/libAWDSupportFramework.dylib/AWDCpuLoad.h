/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCpuLoad : PBCodable <NSCopying> {
    unsigned int  _duration;
    struct { 
        unsigned int duration : 1; 
    }  _has;
    NSString * _procName;
}

@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic, readonly) BOOL hasProcName;
@property (nonatomic, retain) NSString *procName;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (BOOL)hasDuration;
- (BOOL)hasProcName;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)procName;
- (BOOL)readFrom:(id)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setProcName:(id)arg1;
- (void)writeTo:(id)arg1;

@end

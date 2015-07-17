/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableNanoSyncChange : PBCodable <HDNanoSyncDescription, HDSyncChange, NSCopying> {
    long long  _endAnchor;
    struct { 
        unsigned int endAnchor : 1; 
        unsigned int startAnchor : 1; 
        unsigned int objectType : 1; 
    }  _has;
    NSMutableArray * _objectDatas;
    int  _objectType;
    NSMutableArray * _requiredAnchors;
    long long  _startAnchor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long endAnchor;
@property (nonatomic) BOOL hasEndAnchor;
@property (nonatomic) BOOL hasObjectType;
@property (nonatomic) BOOL hasStartAnchor;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableArray *objectDatas;
@property (nonatomic) int objectType;
@property (nonatomic, readonly) <HDSyncAnchorMap> *requiredAnchorMap;
@property (nonatomic, retain) NSMutableArray *requiredAnchors;
@property (nonatomic) long long startAnchor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct HDSyncAnchorRange { long long x1; long long x2; } syncAnchorRange;

+ (id)changeWithNanoSyncEntityClass:(Class)arg1;

- (void).cxx_destruct;
- (void)addObjectData:(id)arg1;
- (void)addRequiredAnchors:(id)arg1;
- (void)clearObjectDatas;
- (void)clearRequiredAnchors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedObjects;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)endAnchor;
- (BOOL)hasEndAnchor;
- (BOOL)hasObjectType;
- (BOOL)hasStartAnchor;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nanoSyncDescription;
- (id)objectDataAtIndex:(unsigned int)arg1;
- (id)objectDatas;
- (unsigned int)objectDatasCount;
- (int)objectType;
- (BOOL)readFrom:(id)arg1;
- (id)requiredAnchorMap;
- (id)requiredAnchors;
- (id)requiredAnchorsAtIndex:(unsigned int)arg1;
- (unsigned int)requiredAnchorsCount;
- (void)setEndAnchor:(long long)arg1;
- (void)setHasEndAnchor:(BOOL)arg1;
- (void)setHasObjectType:(BOOL)arg1;
- (void)setHasStartAnchor:(BOOL)arg1;
- (void)setObjectDatas:(id)arg1;
- (void)setObjectType:(int)arg1;
- (void)setObjects:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 requiredAnchorMap:(id)arg3;
- (void)setRequiredAnchors:(id)arg1;
- (void)setStartAnchor:(long long)arg1;
- (long long)startAnchor;
- (struct HDSyncAnchorRange { long long x1; long long x2; })syncAnchorRange;
- (Class)syncEntityClass;
- (void)writeTo:(id)arg1;

@end

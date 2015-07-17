/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

@interface CSLUIPBNumber : PBCodable <NSCopying> {
    BOOL  _boolValue;
    double  _doubleValue;
    float  _floatValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int int64Value : 1; 
        unsigned int floatValue : 1; 
        unsigned int int32Value : 1; 
        unsigned int boolValue : 1; 
    }  _has;
    int  _int32Value;
    long long  _int64Value;
}

@property (nonatomic) BOOL boolValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) float floatValue;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasFloatValue;
@property (nonatomic) BOOL hasInt32Value;
@property (nonatomic) BOOL hasInt64Value;
@property (nonatomic) int int32Value;
@property (nonatomic) long long int64Value;

- (BOOL)boolValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (float)floatValue;
- (BOOL)hasBoolValue;
- (BOOL)hasDoubleValue;
- (BOOL)hasFloatValue;
- (BOOL)hasInt32Value;
- (BOOL)hasInt64Value;
- (unsigned int)hash;
- (int)int32Value;
- (long long)int64Value;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBoolValue:(BOOL)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setFloatValue:(float)arg1;
- (void)setHasBoolValue:(BOOL)arg1;
- (void)setHasDoubleValue:(BOOL)arg1;
- (void)setHasFloatValue:(BOOL)arg1;
- (void)setHasInt32Value:(BOOL)arg1;
- (void)setHasInt64Value:(BOOL)arg1;
- (void)setInt32Value:(int)arg1;
- (void)setInt64Value:(long long)arg1;
- (void)writeTo:(id)arg1;

@end

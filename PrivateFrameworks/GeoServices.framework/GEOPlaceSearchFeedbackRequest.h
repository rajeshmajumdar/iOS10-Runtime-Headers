/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying> {
    long long  _businessID;
    int  _feedbackType;
    struct { 
        unsigned int sessionGUID : 1; 
        unsigned int businessID : 1; 
        unsigned int timestamp : 1; 
        unsigned int feedbackType : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int numberOfResults : 1; 
        unsigned int positionInResults : 1; 
        unsigned int sequenceNumber : 1; 
    }  _has;
    int  _localSearchProviderID;
    int  _numberOfResults;
    int  _positionInResults;
    int  _sequenceNumber;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionGUID;
    double  _timestamp;
}

@property (nonatomic) long long businessID;
@property (nonatomic) int feedbackType;
@property (nonatomic) BOOL hasBusinessID;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (nonatomic) BOOL hasNumberOfResults;
@property (nonatomic) BOOL hasPositionInResults;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasSessionGUID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) int numberOfResults;
@property (nonatomic) int positionInResults;
@property (nonatomic) int sequenceNumber;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; } sessionGUID;
@property (nonatomic) double timestamp;

- (long long)businessID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedbackType;
- (BOOL)hasBusinessID;
- (BOOL)hasFeedbackType;
- (BOOL)hasLocalSearchProviderID;
- (BOOL)hasNumberOfResults;
- (BOOL)hasPositionInResults;
- (BOOL)hasSequenceNumber;
- (BOOL)hasSessionGUID;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)localSearchProviderID;
- (void)mergeFrom:(id)arg1;
- (int)numberOfResults;
- (int)positionInResults;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (int)sequenceNumber;
- (struct { unsigned long long x1; unsigned long long x2; })sessionGUID;
- (void)setBusinessID:(long long)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setHasBusinessID:(BOOL)arg1;
- (void)setHasFeedbackType:(BOOL)arg1;
- (void)setHasLocalSearchProviderID:(BOOL)arg1;
- (void)setHasNumberOfResults:(BOOL)arg1;
- (void)setHasPositionInResults:(BOOL)arg1;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setHasSessionGUID:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setNumberOfResults:(int)arg1;
- (void)setPositionInResults:(int)arg1;
- (void)setSequenceNumber:(int)arg1;
- (void)setSessionGUID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end

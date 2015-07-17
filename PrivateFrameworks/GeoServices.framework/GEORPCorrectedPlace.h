/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPCorrectedPlace : PBCodable <NSCopying> {
    GEOPDPlaceRequest * _placeRequest;
}

@property (nonatomic, readonly) BOOL hasPlaceRequest;
@property (nonatomic, retain) GEOPDPlaceRequest *placeRequest;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPlaceRequest;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeRequest;
- (BOOL)readFrom:(id)arg1;
- (void)setPlaceRequest:(id)arg1;
- (void)writeTo:(id)arg1;

@end

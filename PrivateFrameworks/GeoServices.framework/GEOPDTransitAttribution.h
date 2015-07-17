/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDTransitAttribution : PBCodable <NSCopying> {
    NSMutableArray * _providerNames;
}

@property (nonatomic, retain) NSMutableArray *providerNames;

+ (id)transitAttributionForPlaceData:(id)arg1;

- (void)addProviderName:(id)arg1;
- (void)clearProviderNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)providerNameAtIndex:(unsigned int)arg1;
- (id)providerNames;
- (unsigned int)providerNamesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setProviderNames:(id)arg1;
- (void)writeTo:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLPresent : PBCodable <NSCopying> {
    NSMutableArray * _items;
    GEOURLOptions * _options;
}

@property (nonatomic, readonly) BOOL hasOptions;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, retain) GEOURLOptions *options;

- (void)addItem:(id)arg1;
- (void)clearItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasOptions;
- (unsigned int)hash;
- (id)initWithDirectionsOptions:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)itemAtIndex:(unsigned int)arg1;
- (id)items;
- (unsigned int)itemsCount;
- (void)mergeFrom:(id)arg1;
- (id)options;
- (BOOL)readFrom:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)writeTo:(id)arg1;

@end

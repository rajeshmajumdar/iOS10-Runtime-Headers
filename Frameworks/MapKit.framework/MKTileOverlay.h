/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTileOverlay : NSObject <MKOverlay> {
    NSString * _URLTemplate;
    BOOL  _canReplaceMapContent;
    BOOL  _geometryFlipped;
    int  _maximumZ;
    int  _minimumZ;
    unsigned int  _providerID;
    GEOTileCache * _tileCache;
    struct CGSize { 
        float width; 
        float height; 
    }  _tileSize;
}

@property (readonly) NSString *URLTemplate;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingMapRect;
@property (nonatomic) BOOL canReplaceMapContent;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isGeometryFlipped) BOOL geometryFlipped;
@property (readonly) unsigned int hash;
@property int maximumZ;
@property int minimumZ;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property struct CGSize { float x1; float x2; } tileSize;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)URLForTilePath:(struct { int x1; int x2; int x3; float x4; })arg1;
- (id)URLTemplate;
- (void)_assignProviderID;
- (void)_flushCaches;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })_keyForPath:(struct { int x1; int x2; int x3; float x4; })arg1;
- (void)_loadTile:(id)arg1 result:(id /* block */)arg2;
- (id)_tilesInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2 contentScale:(float)arg3;
- (int)_zoomLevelForScale:(float)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (BOOL)canReplaceMapContent;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)init;
- (id)initWithURLTemplate:(id)arg1;
- (BOOL)isGeometryFlipped;
- (void)loadTileAtPath:(struct { int x1; int x2; int x3; float x4; })arg1 result:(id /* block */)arg2;
- (int)maximumZ;
- (int)minimumZ;
- (void)setCanReplaceMapContent:(BOOL)arg1;
- (void)setGeometryFlipped:(BOOL)arg1;
- (void)setMaximumZ:(int)arg1;
- (void)setMinimumZ:(int)arg1;
- (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })tileSize;

@end

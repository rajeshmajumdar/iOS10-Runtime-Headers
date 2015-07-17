/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolylineOverlayRenderRegion : NSObject {
    struct vector<VKRect, std::__1::allocator<VKRect> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<VKRect *, std::__1::allocator<VKRect> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    }  _rectsForSnapping;
    struct vector<VKTileKey, std::__1::allocator<VKTileKey> > { 
        struct VKTileKey {} *__begin_; 
        struct VKTileKey {} *__end_; 
        struct __compressed_pair<VKTileKey *, std::__1::allocator<VKTileKey> > { 
            struct VKTileKey {} *__first_; 
        } __end_cap_; 
    }  _snappedTileKeys;
    NSSet * _tiles;
    struct { 
        double x0; 
        double x1; 
        double y0; 
        double y1; 
    }  _visibleRect;
}

@property (nonatomic, readonly) NSSet *tiles;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } visibleRect;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initForKeysInView:(id)arg1 tiles:(id)arg2 allowsSnapping:(BOOL)arg3;
- (BOOL)isEquivalentToNewRegion:(id)arg1;
- (const struct vector<VKRect, std::__1::allocator<VKRect> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<VKRect *, std::__1::allocator<VKRect> > { struct { /* ? */ } *x_3_1_1; } x3; }*)rectsForSnapping;
- (id)tiles;
- (struct { double x1; double x2; double x3; double x4; })visibleRect;

@end

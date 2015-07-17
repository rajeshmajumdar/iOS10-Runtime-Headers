/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTPasteMap : NSObject {
    struct set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> > { 
        struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> > { 
            struct __tree_node<TSTColumnOrRowMap, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, TSTColumnOrRowMapTgtLess> { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    }  mColumnTgtToPbMaps;
    struct set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> > { 
        struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> > { 
            struct __tree_node<TSTColumnOrRowMap, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, TSTColumnOrRowMapTgtLess> { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    }  mRowTgtToPbMaps;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createTgtMergeMapFromPbMergeMap:(id)arg1 andTgtRegion:(id*)arg2 andTgtBodyRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3;
- (id)createTgtRegionByIntersectingPbRegion:(id)arg1 andTgtRegion:(id)arg2;
- (id)createTgtRegionFromPbRegion:(id)arg1;
- (id)initWithPbRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 tgtRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initWithPbTable:(id)arg1 pbRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 tgtTable:(id)arg3 tgtRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg4 flag:(int)arg5;
- (unsigned short)p_indexForTgtToPbMaps:(struct set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree_node<TSTColumnOrRowMap, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTColumnOrRowMapTgtLess> { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)arg1 andMap:(struct TSTColumnOrRowMap { unsigned short x1; unsigned short x2; unsigned short x3; BOOL x4; }*)arg2;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })p_tgtCellIDForPbCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 givenColumnMaps:(const struct multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree_node<TSTColumnOrRowMap, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTColumnOrRowMapPbLess> { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)arg2 rowMaps:(const struct multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree_node<TSTColumnOrRowMap, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTColumnOrRowMapPbLess> { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)arg3;
- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })p_tgtRangeForPbRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 givenColumnMaps:(const struct multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree_node<TSTColumnOrRowMap, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTColumnOrRowMapPbLess> { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)arg2 rowMaps:(const struct multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree_node<TSTColumnOrRowMap, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTColumnOrRowMapPbLess> { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })p_tgtRangeFromPbRange:(const struct TSTColumnOrRowMap { unsigned short x1; unsigned short x2; unsigned short x3; BOOL x4; }*)arg1 andMap:(const struct multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree_node<TSTColumnOrRowMap, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTColumnOrRowMapPbLess> { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)arg2;
- (struct vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> > { struct TSUColumnRowRect {} *x1; struct TSUColumnRowRect {} *x2; struct __compressed_pair<TSUColumnRowRect *, std::__1::allocator<TSUColumnRowRect> > { struct TSUColumnRowRect {} *x_3_1_1; } x3; }*)p_tgtRangesForPbRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 givenColumnMaps:(const struct multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree_node<TSTColumnOrRowMap, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTColumnOrRowMapPbLess> { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)arg2 rowMaps:(const struct multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree_node<TSTColumnOrRowMap, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTColumnOrRowMapPbLess> { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)arg3;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })pbCellIDForTgtCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })pbRangeForTgtRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;

@end

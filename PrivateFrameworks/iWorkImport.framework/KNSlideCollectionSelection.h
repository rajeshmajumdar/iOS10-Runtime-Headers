/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideCollectionSelection : TSKSelection {
    KNSlideNode * mSlideNodeToEdit;
    NSOrderedSet * mSlideNodes;
}

@property (getter=isEmpty, nonatomic, readonly) BOOL empty;
@property (nonatomic, readonly) KNSlideNode *slideNodeToEdit;
@property (nonatomic, readonly) NSOrderedSet *slideNodes;

+ (Class)archivedSelectionClass;

- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (id)initWithArchive:(const struct SlideCollectionSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct Reference {} *x6; struct RepeatedPtrField<KN::SlideCollectionSelectionArchive_OutlineSelection> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct Range {} *x8; }*)arg1 unarchiver:(id)arg2;
- (id)initWithSlideNode:(id)arg1;
- (id)initWithSlideNodes:(id)arg1 slideNodeToEdit:(id)arg2;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (void)saveToArchive:(struct SlideCollectionSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct Reference {} *x6; struct RepeatedPtrField<KN::SlideCollectionSelectionArchive_OutlineSelection> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct Range {} *x8; }*)arg1 archiver:(id)arg2;
- (id)slideNodeToEdit;
- (id)slideNodes;

@end

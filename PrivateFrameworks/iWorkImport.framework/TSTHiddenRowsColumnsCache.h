/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTHiddenRowsColumnsCache : NSObject <TSTTableHiddenRowColumnProviding> {
    NSMutableIndexSet * _columnsInvalid;
    TSTHiddenStateIndexSet * _columnsVisible;
    unsigned int  _rowMarkIndex;
    NSMutableIndexSet * _rowsInvalid;
    TSTHiddenStateIndexSet * _rowsUserVisible;
    TSTHiddenStateIndexSet * _rowsVisible;
}

@property (nonatomic, retain) NSMutableIndexSet *columnsInvalid;
@property (nonatomic, retain) TSTHiddenStateIndexSet *columnsVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int rowMarkIndex;
@property (nonatomic, retain) NSMutableIndexSet *rowsInvalid;
@property (nonatomic, retain) TSTHiddenStateIndexSet *rowsUserVisible;
@property (nonatomic, retain) TSTHiddenStateIndexSet *rowsVisible;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSIndexSet *userVisibleRowIndices;
@property (nonatomic, readonly) NSIndexSet *visibleColumnIndices;
@property (nonatomic, readonly) NSIndexSet *visibleRowIndices;

- (BOOL)anyColumnsHiddenInCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (BOOL)anyRowsHiddenInCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (BOOL)anyRowsUserHiddenInCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)columnsInvalid;
- (id)columnsVisible;
- (void)dealloc;
- (id)init;
- (BOOL)isColumnHidden:(unsigned char)arg1;
- (BOOL)isRowHidden:(unsigned short)arg1;
- (BOOL)isRowUserHidden:(unsigned short)arg1;
- (unsigned short)nonUserHiddenRowAfterAndIncludingRow:(unsigned short)arg1;
- (unsigned short)numberColumnsHiddenInCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (unsigned short)numberColumnsVisibleInCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (unsigned short)numberOfVisibleRowsFromHeader:(unsigned short)arg1;
- (unsigned short)numberRowsHiddenInCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (unsigned short)numberRowsUserHiddenInCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (unsigned short)numberRowsVisibleInCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (unsigned char)previousNthVisibleColumn:(unsigned short)arg1 fromColumnIndex:(unsigned char)arg2;
- (unsigned short)previousNthVisibleRow:(unsigned short)arg1 fromRowIndex:(unsigned short)arg2;
- (unsigned int)rowMarkIndex;
- (id)rowsInvalid;
- (id)rowsUserVisible;
- (id)rowsVisible;
- (void)setColumnsInvalid:(id)arg1;
- (void)setColumnsVisible:(id)arg1;
- (void)setRowMarkIndex:(unsigned int)arg1;
- (void)setRowsInvalid:(id)arg1;
- (void)setRowsUserVisible:(id)arg1;
- (void)setRowsVisible:(id)arg1;
- (id)userVisibleRowIndices;
- (void)validate:(id)arg1;
- (void)validateChangeDescriptors:(id)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })visibleCellOffsetBy:(struct { int x1; int x2; })arg1 fromCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (unsigned char)visibleColumnAfterAndIncludingColumn:(unsigned char)arg1;
- (unsigned char)visibleColumnAfterColumn:(unsigned char)arg1;
- (unsigned char)visibleColumnBeforeAndIncludingColumn:(unsigned char)arg1;
- (unsigned char)visibleColumnBeforeColumn:(unsigned char)arg1;
- (id)visibleColumnIndices;
- (unsigned short)visibleRowAfterAndIncludingRow:(unsigned short)arg1;
- (unsigned short)visibleRowAfterRow:(unsigned short)arg1;
- (unsigned short)visibleRowBeforeAndIncludingRow:(unsigned short)arg1;
- (unsigned short)visibleRowBeforeRow:(unsigned short)arg1;
- (id)visibleRowIndices;

@end

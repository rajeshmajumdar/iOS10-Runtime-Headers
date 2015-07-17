/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartFormulaStorage : NSObject <NSCopying, NSMutableCopying> {
    unsigned int  mCachedNumberOfGroups;
    BOOL  mCachedNumberOfGroupsValid;
    int  mDirection;
    struct __CFDictionary { } * mStorage;
}

+ (struct vector<TNChartFormulaType, std::__1::allocator<TNChartFormulaType> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<TNChartFormulaType *, std::__1::allocator<TNChartFormulaType> > { unsigned int *x_3_1_1; } x3; })persistentFormulaTypes;

- (id)areaFormulaWithCalcEngine:(id)arg1 inOwner:(struct __CFUUID { }*)arg2;
- (unsigned int)categoryLabelFormulaType;
- (void)clearCachesForCalculationEngine:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (BOOL)dataFormulaAreRegularForSeriesInsertionWithCalcEngine:(id)arg1 inOwner:(struct __CFUUID { }*)arg2;
- (void)dealloc;
- (id)description;
- (int)direction;
- (id)formulaForID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg1;
- (id)formulaListForType:(unsigned int)arg1;
- (id)formulaOrNilForID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg1;
- (id)formulaTypeEnumerator;
- (BOOL)formulasOfType:(unsigned int)arg1 areAllStaticWithCalcEngine:(id)arg2 inEntity:(struct __CFUUID { }*)arg3;
- (id)init;
- (id)initWithArchive:(const struct ChartMediatorFormulaStorage { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCE::FormulaArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSCE::FormulaArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSCE::FormulaArchive> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSCE::FormulaArchive> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<TSCE::FormulaArchive> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<TSCE::FormulaArchive> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct RepeatedPtrField<TSCE::FormulaArchive> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; int x12; }*)arg1 unarchiver:(id)arg2;
- (id)initWithChartFormulaStorage:(id)arg1;
- (id)initWithDirection:(int)arg1;
- (BOOL)isEqualToFormulaStorage:(id)arg1;
- (BOOL)labelFormulasAreAllStaticWithCalcEngine:(id)arg1 inEntity:(struct __CFUUID { }*)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)numberOfDataFormulas;
- (unsigned int)numberOfGroupsWithCalcEngine:(id)arg1 inEntity:(struct __CFUUID { }*)arg2;
- (unsigned int)numberOfSeries;
- (unsigned int)p_calculateNumberOfGroupsWithCalcEngine:(id)arg1 inEntity:(struct __CFUUID { }*)arg2;
- (struct __CFDictionary { }*)p_cfDictionary;
- (void)saveToArchive:(struct ChartMediatorFormulaStorage { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCE::FormulaArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSCE::FormulaArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSCE::FormulaArchive> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSCE::FormulaArchive> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<TSCE::FormulaArchive> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<TSCE::FormulaArchive> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct RepeatedPtrField<TSCE::FormulaArchive> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; int x12; }*)arg1 archiver:(id)arg2;
- (unsigned int)seriesLabelFormulaType;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAddedToDocumentContext : NSObject {
    NSMutableArray * mInsertedTableInfos;
}

@property (retain) <TSKMultiTableRemapping> *multiTableRemapper;

+ (id)changeTrackingSubstorageForCopyContext;
+ (id)dragCopyContext;
+ (id)dragMoveContext;
+ (id)exportFootnoteContext;
+ (id)importingContextWithImporterID:(id)arg1;
+ (id)importingMasterTemplateContextWithImporterID:(id)arg1;
+ (id)insertingPrototypeContext;
+ (id)migrateStylesContext;
+ (id)moveSectionContext;
+ (id)movingContext;
+ (id)pastingContext;
+ (id)pastingMatchStyleContext;
+ (id)unarchivingContext;
+ (id)undoDeleteContext;
+ (id)unhidingContext;

- (void)addDrawable:(id)arg1;
- (void)addDrawables:(id)arg1;
- (void)addInsertedTableInfo:(id)arg1;
- (id)addedDrawables;
- (BOOL)autoUpdateSmartFields;
- (BOOL)changeTrackingSubstorage;
- (void)dealloc;
- (id)importerID;
- (id)insertedTableInfos;
- (BOOL)invokeDOLC;
- (BOOL)matchStyle;
- (id)multiTableRemapper;
- (BOOL)preserveChangeTracking;
- (void)setMultiTableRemapper:(id)arg1;
- (BOOL)syncChanges;
- (id)undoContext;
- (BOOL)uniqueBookmarks;
- (BOOL)wasDragMoved;
- (BOOL)wasDragOperation;
- (BOOL)wasImported;
- (BOOL)wasImportedFromMasterTemplate;
- (BOOL)wasMigratingStyles;
- (BOOL)wasMoved;
- (BOOL)wasPasted;
- (BOOL)wasUnarchived;
- (BOOL)wasUndoDelete;
- (BOOL)wasUnhidden;

@end

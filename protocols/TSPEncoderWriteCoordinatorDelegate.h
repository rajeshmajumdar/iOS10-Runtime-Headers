/* Generated by RuntimeBrowser.
 */

@protocol TSPEncoderWriteCoordinatorDelegate <NSObject>

@required

- (int)componentWriterMode;
- (TSPObject *)createMetadataForRootObject:(TSPObject *)arg1 dataArchiver:(id <TSPDataArchiver>)arg2 archivedObjects:(NSMapTable *)arg3 componentObjectUUIDMap:(TSPComponentObjectUUIDMap *)arg4 externalReferences:(NSHashTable *)arg5 weakExternalReferences:(NSHashTable *)arg6 lazyReferences:(NSHashTable *)arg7 dataReferences:(NSHashTable *)arg8 error:(id*)arg9;
- (BOOL)skipMetadataObjectSerialization;

@end

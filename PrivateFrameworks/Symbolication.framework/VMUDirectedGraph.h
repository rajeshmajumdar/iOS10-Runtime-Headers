/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUDirectedGraph : NSObject <NSCopying> {
    NSDictionary * _additionalProperties;
    void * _deadNodes;
    unsigned int  _edgeCapacity;
    unsigned int  _edgeCount;
    struct _VMUDirectedGraphEdge { unsigned int x1; unsigned int x2; unsigned int x3; } * _edges;
    unsigned int  _externalEdges;
    unsigned int  _indexedEdges;
    unsigned int  _indexedNodeSpace;
    int  _insideSearch;
    BOOL  _inverted;
    unsigned int  _nextEdgeName;
    unsigned int  _nextNodeName;
    unsigned int * _nodeAdjIndex;
    unsigned int  _nodeCount;
}

@property (nonatomic, copy) NSDictionary *additionalProperties;
@property (nonatomic, readonly) unsigned int edgeCount;
@property (nonatomic, readonly) unsigned int edgeNamespaceSize;
@property (nonatomic) BOOL inverted;
@property (nonatomic, readonly) unsigned int nodeCount;
@property (nonatomic, readonly) unsigned int nodeNamespaceSize;

+ (id)_archivedBytes:(const void*)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3;
+ (id)_archivedObject:(id)arg1 options:(unsigned int)arg2;
+ (void*)_copyUnarchived:(id)arg1 length:(unsigned int*)arg2 options:(unsigned int)arg3;
+ (id)_unarchivedObject:(id)arg1 options:(unsigned int)arg2;

- (void)_adjustAdjacencyMap;
- (void*)_deadNodeMap;
- (void)_dumpAdjacencyList;
- (void)_faultDeadNodeMap;
- (void)_internalAddEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2 withName:(unsigned int)arg3;
- (unsigned int)_internalEnumerateEdgesOfNode:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (void)_removeEdges:(id /* block */)arg1;
- (void)_renameWithNodeMap:(unsigned int*)arg1 nodeNamespace:(unsigned int)arg2 edgeMap:(unsigned int*)arg3 edgeNamespace:(unsigned int)arg4;
- (void)_renormalize;
- (void)_searchMainLoop:(unsigned int)arg1 action:(id /* block */)arg2;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2;
- (unsigned int)addGroupNodeForNodes:(const unsigned int*)arg1 count:(unsigned int)arg2;
- (unsigned int)addNode;
- (id)additionalProperties;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned int)arg2;
- (void)breadthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(id /* block */)arg2 edgeVisitBlock:(id /* block */)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)depthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(id /* block */)arg2 edgeVisitBlock:(id /* block */)arg3;
- (unsigned int)edgeCount;
- (unsigned int)edgeNamespaceSize;
- (unsigned int)enumerateEdgesOfNode:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (unsigned int)enumerateEdgesWithBlock:(id /* block */)arg1;
- (unsigned int)enumerateMembersOfGroupNode:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (unsigned int)enumerateNodesWithBlock:(id /* block */)arg1;
- (id)initWithArchived:(id)arg1 options:(unsigned int)arg2;
- (id)initWithNodes:(unsigned int)arg1;
- (id)initWithPlistRepresentation:(id)arg1;
- (void)invertEdges;
- (BOOL)inverted;
- (id)invertedGraph;
- (void)markReachableNodesFromRoots:(void*)arg1 inMap:(void*)arg2;
- (unsigned int)nodeCount;
- (unsigned int)nodeNamespaceSize;
- (unsigned int)parentGroupForNode:(unsigned int)arg1;
- (id)plistRepresentationWithOptions:(unsigned int)arg1;
- (void)removeMarkedEdges:(void*)arg1;
- (void)removeMarkedNodes:(void*)arg1;
- (id)renormalizedGraph;
- (void)setAdditionalProperties:(id)arg1;
- (void)setInverted:(BOOL)arg1;
- (void)stronglyConnectedComponentSearch:(unsigned int)arg1 withRecorder:(id /* block */)arg2;
- (id)subgraphWithMarkedNodes:(void*)arg1;
- (id)subgraphWithShortestPathsFromNode:(unsigned int)arg1 toNodes:(void*)arg2;
- (void)ungroupNode:(unsigned int)arg1;
- (void)withEdgeMarkingMap:(id /* block */)arg1;
- (void)withNodeMarkingMap:(id /* block */)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapView : CALayer <GGLLayerDisruptor, GGLRenderQueueSource, MDMapControllerDelegate, VKInteractiveMapDelegate> {
    GEOResourceManifestConfiguration * _additionalManifestConfiguration;
    BOOL  _additionalManifestConfigurationLoaderOpen;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _animatingToEdgeInsets;
    NSMutableArray * _annotationMarkersToAddToNewCanvas;
    unsigned char  _applicationState;
    VKMapCanvas * _canvas;
    BOOL  _containsOverlay;
    GGLDisplayLink * _displayLink;
    int  _displayRate;
    VKTimedAnimation * _edgeInsetAnimation;
    VKClassicGlobeCanvas * _globe;
    BOOL  _isChangingMapType;
    BOOL  _isInBackground;
    BOOL  _loaderOpen;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    <VKMapViewDelegate> * _mapDelegate;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
    }  _mapDisplayStyle;
    VKTimedAnimation * _mapDisplayStyleAnimation;
    MDDisplayLayer * _mapLayer;
    int  _mapType;
    VKMemoryObserver * _memoryObserver;
    struct vector<OnscreenTimestampData, std::__1::allocator<OnscreenTimestampData> > { 
        struct OnscreenTimestampData {} *__begin_; 
        struct OnscreenTimestampData {} *__end_; 
        struct __compressed_pair<OnscreenTimestampData *, std::__1::allocator<OnscreenTimestampData> > { 
            struct OnscreenTimestampData {} *__first_; 
        } __end_cap_; 
    }  _onscreenTimestamps;
    unsigned int  _regionChangeCount;
    struct shared_ptr<ggl::RenderQueue> { 
        struct RenderQueue {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _renderQueue;
    int  _requestedRate;
    VKLabelMarker * _selectedLabelMarker;
    NSString * _tileLoaderClientID;
    double  _verticalYaw;
}

@property (nonatomic, retain) GEOResourceManifestConfiguration *additionalManifestConfiguration;
@property (nonatomic) BOOL allowDatelineWraparound;
@property (nonatomic, readonly) double altitude;
@property (getter=isAnimatingToTrackAnnotation, nonatomic, readonly) BOOL animatingToTrackAnnotation;
@property (nonatomic, readonly) NSArray *annotationMarkers;
@property (nonatomic) int annotationTrackingHeadingAnimationDisplayRate;
@property (nonatomic) int annotationTrackingZoomStyle;
@property (nonatomic) unsigned char applicationState;
@property (nonatomic, readonly) BOOL canEnter3DMode;
@property (nonatomic, readonly) BOOL canShowFlyover;
@property (nonatomic, readonly) BOOL canShowFlyoverAnimation;
@property (nonatomic) struct { double x1; double x2; double x3; } centerCoordinate;
@property (nonatomic, readonly) double currentZoomLevel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL debugDrawContinuously;
@property (nonatomic) BOOL debugEnableMultisampling;
@property (nonatomic, readonly) float debugFramesPerSecond;
@property (nonatomic) BOOL debugLayoutContinuously;
@property (readonly, copy) NSString *description;
@property (nonatomic) int displayRate;
@property (nonatomic) BOOL dynamicMapModesEnabled;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic, readonly) BOOL enableDebugLabelHighlighting;
@property (nonatomic, retain) NSArray *externalTrafficIncidents;
@property (nonatomic, readonly) int flyoverMode;
@property (nonatomic, retain) VKPolylineOverlayPainter *focusedLabelsPolylinePainter;
@property (getter=isFullyDrawn, nonatomic, readonly) BOOL fullyDrawn;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } fullyOccludedEdgeInsets;
@property (getter=isFullyPitched, nonatomic, readonly) BOOL fullyPitched;
@property (getter=isGesturing, nonatomic) BOOL gesturing;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CADisplay *hostDisplay;
@property (nonatomic) BOOL iconsShouldAlignToPixels;
@property (nonatomic) BOOL isPitchable;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } labelEdgeInsets;
@property (getter=isLabelMarkerSelectionEnabled, nonatomic) BOOL labelMarkerSelectionEnabled;
@property (nonatomic, readonly) NSArray *labelMarkers;
@property (nonatomic) int labelScaleFactor;
@property (nonatomic) BOOL localizeLabels;
@property (nonatomic, readonly) VKMapCanvas *mapCanvas;
@property (nonatomic) <VKMapViewDelegate> *mapDelegate;
@property (nonatomic) struct { unsigned char x1; unsigned char x2; unsigned char x3; } mapDisplayStyle;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) GEOMapRegion *mapRegionOfInterest;
@property (nonatomic) int mapType;
@property (nonatomic, readonly) double maximumZoomLevel;
@property (nonatomic, readonly) double minimumZoomLevel;
@property (nonatomic) int navigationShieldSize;
@property (nonatomic, readonly) double pitch;
@property (getter=isPitched, nonatomic, readonly) BOOL pitched;
@property (nonatomic, readonly) double presentationYaw;
@property (nonatomic) BOOL rendersInBackground;
@property (nonatomic, retain) <GEORoutePreloadSession> *routePreloadSession;
@property (nonatomic, readonly) VKLabelMarker *selectedLabelMarker;
@property (nonatomic) int shieldIdiom;
@property (nonatomic) int shieldSize;
@property (nonatomic) BOOL shouldLoadFallbackTiles;
@property (nonatomic) BOOL shouldLoadMapMargin;
@property (getter=isShowingFlyover, nonatomic, readonly) BOOL showingFlyover;
@property (nonatomic) BOOL showsBuildings;
@property (nonatomic) BOOL showsPointsOfInterest;
@property (nonatomic) BOOL staysCenteredDuringPinch;
@property (nonatomic) BOOL staysCenteredDuringRotation;
@property (readonly) Class superclass;
@property (nonatomic) int targetDisplay;
@property (nonatomic) int trackingCameraPanStyle;
@property (nonatomic) double trackingZoomScale;
@property (nonatomic) BOOL trafficEnabled;
@property (nonatomic) BOOL trafficIncidentsEnabled;
@property (nonatomic) double userZoomFocusStyleGroundspanMeters;
@property (nonatomic) double userZoomFocusStyleMaxGroundspanMeters;
@property (nonatomic) double userZoomFocusStyleMinGroundspanMeters;
@property (nonatomic) struct { BOOL x1; } vehicleState;
@property (nonatomic, readonly) double verticalYaw;
@property (nonatomic, readonly) NSArray *visibleTileSets;
@property (nonatomic, readonly) double yaw;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearAnalytics;
- (void)_closeAdditionalManifestConfigurationLoaderConnection;
- (BOOL)_createDisplayLayer;
- (void)_createGlobe;
- (void)_forceLayoutForSuspensionSnapShot;
- (void)_notifyDelegateFlyoverTourLabelChanged:(id)arg1;
- (void)_openAdditionalManifestConfigurationLoaderConnection;
- (void)_resetMaximumZoomLevel;
- (void)_runFlyoverTourStateChange:(int)arg1 completion:(id /* block */)arg2;
- (void)_setMaximumZoomLevel:(double)arg1;
- (void)_setStyleTransitionProgress:(float)arg1 targetStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; })arg2 step:(int)arg3;
- (float)_styleTransitionProgress;
- (void)_updateAnalytics:(BOOL)arg1;
- (void)_updateBackgroundColor;
- (void)_updateDisplayRate;
- (void)_updateMapDisplayStyle;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)addExternalAnchor:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (id)additionalManifestConfiguration;
- (BOOL)allowDatelineWraparound;
- (double)altitude;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id /* block */)arg5;
- (id /* block */)annotationCoordinateTest;
- (id)annotationMarkerForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1 avoidCurrent:(BOOL)arg2;
- (id)annotationMarkers;
- (id /* block */)annotationRectTest;
- (int)annotationTrackingHeadingAnimationDisplayRate;
- (int)annotationTrackingZoomStyle;
- (unsigned char)applicationState;
- (id)attributionsForCurrentRegion;
- (BOOL)buildingFootprintsDisabled;
- (id)buildingMarkerAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)canEnter3DMode;
- (BOOL)canShowAnimationForSearchResultWithMapRegion:(id)arg1;
- (BOOL)canShowFlyover;
- (BOOL)canShowFlyoverAnimation;
- (BOOL)canZoomInForTileSize:(int)arg1;
- (BOOL)canZoomOutForTileSize:(int)arg1;
- (struct { double x1; double x2; double x3; })centerCoordinate;
- (void)clearOnscreenTimestamps;
- (void)clearScene;
- (void)closeLoaderConnection;
- (id)closestRoadMarkerForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)consoleString:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toCameraModelPointToLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertMapPoint:(struct { double x1; double x2; })arg1 toPointToLayer:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toCoordinateFromLayer:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toMapPointFromLayer:(id)arg2;
- (id)currentCanvas;
- (double)currentZoomLevel;
- (BOOL)currentZoomLevelAllowsRotation;
- (double)currentZoomLevelForTileSize:(int)arg1;
- (void)dealloc;
- (BOOL)debugDrawContinuously;
- (BOOL)debugDynamicMapModesEnabled;
- (BOOL)debugEnableMultisampling;
- (float)debugFramesPerSecond;
- (void)debugHighlightLabelAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)debugLayoutContinuously;
- (void)debugRunPerformanceTestWithOutputHeader:(id)arg1;
- (void)deselectAnnotationMarker:(id)arg1;
- (void)deselectLabelMarker;
- (void)deselectTransitLineMarker;
- (id)detailedDescription;
- (void)didDrawWithTimestamp:(double)arg1;
- (void)didEnterBackground;
- (void)didFinishSnapshotting;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)didStartPanningDeceleration;
- (void)disableFlyoverStatistics;
- (int)displayRate;
- (double)distanceFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2 fromLayer:(id)arg3 withPrecision:(int)arg4;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (BOOL)dynamicMapModesEnabled;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (BOOL)enableDebugLabelHighlighting;
- (void)enableFlyoverStatistics;
- (void)enter3DMode;
- (void)exit3DMode;
- (id)externalTrafficIncidents;
- (id)featureMarkerAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)flushTileLoads;
- (int)flyoverMode;
- (id)flyoverStatistics;
- (id)focusedLabelsPolylinePainter;
- (void)forceFrame;
- (void)forceLayout;
- (void)forceSceneLoad;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })fullyOccludedEdgeInsets;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (BOOL)gridDisabled;
- (id)hostDisplay;
- (BOOL)iconsShouldAlignToPixels;
- (id)initWithGlobe:(BOOL)arg1 shouldRasterize:(BOOL)arg2 inBackground:(BOOL)arg3 manifestConfiguration:(id)arg4;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (BOOL)isAnimatingToTrackAnnotation;
- (BOOL)isEffectivelyHidden;
- (BOOL)isFullyDrawn;
- (BOOL)isFullyPitched;
- (BOOL)isGesturing;
- (BOOL)isLabelMarkerSelectionEnabled;
- (BOOL)isPitchable;
- (BOOL)isPitched;
- (BOOL)isPointValidForGesturing:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isShowingFlyover;
- (BOOL)isShowingNoDataPlaceholders;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })labelEdgeInsets;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1 selectableLabelsOnly:(BOOL)arg2;
- (id)labelMarkers;
- (int)labelScaleFactor;
- (BOOL)labelsDisabled;
- (BOOL)localizeLabels;
- (void)map:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)map:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
- (void)map:(id)arg1 canZoomInDidChange:(BOOL)arg2;
- (void)map:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)map:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)map:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)map:(id)arg1 didUpdateContainsOverlay:(BOOL)arg2;
- (void)map:(id)arg1 didUpdateVerticalYawTo:(double)arg2;
- (void)map:(id)arg1 flyoverModeDidChange:(int)arg2;
- (void)map:(id)arg1 flyoverModeWillChange:(int)arg2;
- (id)map:(id)arg1 painterForOverlay:(id)arg2;
- (id)map:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)map:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (void)map:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)map:(id)arg1 willTransitionFrom:(int)arg2 to:(int)arg3 duration:(double)arg4;
- (id)mapCanvas;
- (void)mapController:(id)arg1 requestsDisplayRate:(int)arg2;
- (void)mapControllerNeedsDisplay:(id)arg1;
- (void)mapControllerNeedsInitialization:(id)arg1;
- (id)mapDelegate;
- (void)mapDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapDidBecomePartiallyDrawn:(id)arg1;
- (void)mapDidChangeVisibleRegion:(id)arg1;
- (void)mapDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapDidFinishChangingMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; })arg1;
- (void)mapDidFinishInitialTrackingAnimation:(id)arg1;
- (void)mapDidFinishLoadingTiles:(id)arg1;
- (void)mapDidReloadStylesheet:(id)arg1;
- (void)mapDidStartLoadingTiles:(id)arg1;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; })mapDisplayStyle;
- (void)mapLabelsDidLayout:(id)arg1;
- (id)mapRegion;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mapRegionBounds;
- (id)mapRegionOfInterest;
- (int)mapType;
- (double)maximumZoomLevel;
- (double)maximumZoomLevelForTileSize:(int)arg1;
- (double)minimumZoomLevel;
- (double)minimumZoomLevelForTileSize:(int)arg1;
- (void)moveToFlyoverTourStartPosition:(id)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (int)navigationShieldSize;
- (void)onTimerFired:(id)arg1;
- (void)openLoaderConnection;
- (void)panWithOffset:(struct CGPoint { float x1; float x2; })arg1 relativeToScreenPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)pauseFlyoverTourAnimation;
- (void)pauseTracking;
- (void)performStyleAnimationStepsInGroup:(id /* block */)arg1;
- (void)performStylesheetDidChange;
- (double)pitch;
- (BOOL)polygonsDisabled;
- (void)preloadNavigationSceneResources;
- (void)prepareFlyoverAnimation:(id)arg1 completion:(id /* block */)arg2;
- (double)presentationYaw;
- (void)puckAnimator:(id)arg1 updatedPosition:(struct { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; BOOL x3; }*)arg2;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(struct VKPoint { double x1; double x2; double x3; })arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (void)pushNewOnscreenTimestamp:(id)arg1;
- (BOOL)rastersDisabled;
- (BOOL)realisticLandDisabled;
- (BOOL)realisticRoadsDisabled;
- (void)reloadStylesheet;
- (void)removeAnnotationMarker:(id)arg1;
- (void)removeExternalAnchor:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (void)removeRasterOverlay:(id)arg1;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (struct RenderQueue { struct vector<ggl::RenderQueue::Pass, std::__1::allocator<ggl::RenderQueue::Pass> > { struct Pass {} *x_1_1_1; struct Pass {} *x_1_1_2; struct __compressed_pair<ggl::RenderQueue::Pass *, std::__1::allocator<ggl::RenderQueue::Pass> > { struct Pass {} *x_3_2_1; } x_1_1_3; } x1; struct vector<ggl::CommandBuffer *, std::__1::allocator<ggl::CommandBuffer *> > { struct CommandBuffer {} **x_2_1_1; struct CommandBuffer {} **x_2_1_2; struct __compressed_pair<ggl::CommandBuffer **, std::__1::allocator<ggl::CommandBuffer *> > { struct CommandBuffer {} **x_3_2_1; } x_2_1_3; } x2; struct shared_ptr<ggl::RenderTransaction> { struct RenderTransaction {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; }*)renderQueue;
- (BOOL)rendersInBackground;
- (void)resetFlyoverStatistics;
- (void)resetRenderQueue;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (void)resumeFlyoverTourAnimation;
- (BOOL)roadClassDisabled:(int)arg1;
- (id)roadMarkersForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)roadsDisabled;
- (id)routePreloadSession;
- (void)runAnimation:(id)arg1;
- (id)secondaryCanvas;
- (void)selectAnnotationMarker:(id)arg1;
- (void)selectLabelMarker:(id)arg1;
- (void)selectTransitLineMarker:(id)arg1;
- (id)selectedLabelMarker;
- (void)setAdditionalManifestConfiguration:(id)arg1;
- (void)setAllowDatelineWraparound:(BOOL)arg1;
- (void)setAnnotationMarkerDeselectionCallback:(id /* block */)arg1;
- (void)setAnnotationTrackingHeadingAnimationDisplayRate:(int)arg1;
- (void)setAnnotationTrackingZoomStyle:(int)arg1;
- (void)setApplicationState:(unsigned char)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;
- (void)setCanonicalSkyHeight:(double)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; double x3; })arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)setCenterCoordinate:(struct { double x1; double x2; double x3; })arg1 animated:(BOOL)arg2;
- (void)setCenterCoordinateSmoothTransition:(struct { double x1; double x2; double x3; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)setContentsScale:(float)arg1;
- (void)setCurrentLocationText:(id)arg1;
- (void)setDebugDrawContinuously:(BOOL)arg1;
- (void)setDebugDynamicMapModesEnabled:(BOOL)arg1;
- (void)setDebugEnableMultisampling:(BOOL)arg1;
- (void)setDebugLayoutContinuously:(BOOL)arg1;
- (void)setDesiredMapMode:(int)arg1 immediate:(BOOL)arg2;
- (void)setDisableBuildingFootprints:(BOOL)arg1;
- (void)setDisableGrid:(BOOL)arg1;
- (void)setDisableLabels:(BOOL)arg1;
- (void)setDisablePolygons:(BOOL)arg1;
- (void)setDisableRasters:(BOOL)arg1;
- (void)setDisableRealisticLand:(BOOL)arg1;
- (void)setDisableRealisticRoads:(BOOL)arg1;
- (void)setDisableRoadClass:(BOOL)arg1 forRoadClass:(int)arg2;
- (void)setDisableRoads:(BOOL)arg1;
- (void)setDisableTransitLines:(BOOL)arg1;
- (void)setDisplayRate:(int)arg1;
- (void)setDynamicMapModesEnabled:(BOOL)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1 duration:(double)arg2 timingFunction:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setExternalTrafficIncidents:(id)arg1;
- (void)setFlyoverMode:(int)arg1;
- (void)setFocusedLabelsPolylinePainter:(id)arg1;
- (void)setFullyOccludedEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGesturing:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setHostDisplay:(id)arg1;
- (void)setIconsShouldAlignToPixels:(BOOL)arg1;
- (void)setIsPitchable:(BOOL)arg1;
- (void)setLabelEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setLabelMarkerSelectionEnabled:(BOOL)arg1;
- (void)setLabelScaleFactor:(int)arg1;
- (void)setLocalizeLabels:(BOOL)arg1;
- (void)setMapDelegate:(id)arg1;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; })arg1 animated:(BOOL)arg2;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; })arg1 animated:(BOOL)arg2 duration:(double)arg3;
- (void)setMapRegion:(id)arg1;
- (void)setMapRegion:(id)arg1 animated:(BOOL)arg2;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)setMapType:(int)arg1;
- (void)setMapType:(int)arg1 animated:(BOOL)arg2;
- (void)setNavigationShieldSize:(int)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)setRendersInBackground:(BOOL)arg1;
- (void)setRouteContext:(id)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setRoutePreloadSession:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setShieldIdiom:(int)arg1;
- (void)setShieldSize:(int)arg1;
- (void)setShouldLimitTrackingCameraHeight:(BOOL)arg1;
- (void)setShouldLoadFallbackTiles:(BOOL)arg1;
- (void)setShouldLoadMapMargin:(BOOL)arg1;
- (void)setShowsBuildings:(BOOL)arg1;
- (void)setShowsPointsOfInterest:(BOOL)arg1;
- (void)setStaysCenteredDuringPinch:(BOOL)arg1;
- (void)setStaysCenteredDuringRotation:(BOOL)arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setStylesheetName:(id)arg1;
- (void)setTargetDisplay:(int)arg1;
- (void)setTracePlaybackSpeedMultiplier:(double)arg1;
- (void)setTrackingCameraPanStyle:(int)arg1;
- (void)setTrackingZoomScale:(double)arg1;
- (void)setTrafficEnabled:(BOOL)arg1;
- (void)setTrafficIncidentsEnabled:(BOOL)arg1;
- (void)setUserZoomFocusStyleGroundspanMeters:(double)arg1;
- (void)setUserZoomFocusStyleMaxGroundspanMeters:(double)arg1;
- (void)setUserZoomFocusStyleMinGroundspanMeters:(double)arg1;
- (void)setVehicleState:(struct { BOOL x1; })arg1;
- (void)setYaw:(double)arg1 animated:(BOOL)arg2;
- (int)shieldIdiom;
- (int)shieldSize;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (BOOL)shouldLoadFallbackTiles;
- (BOOL)shouldLoadMapMargin;
- (void)showSearchResultAnimationAtCoordinate:(struct { double x1; double x2; })arg1 withMapRegion:(id)arg2;
- (BOOL)showsBuildings;
- (BOOL)showsPointsOfInterest;
- (void)startFlyoverAnimation:(id)arg1 animateToStart:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)startFlyoverTourAnimation:(unsigned long long)arg1 animateToStart:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)startPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1 panAtStartPoint:(BOOL)arg2;
- (void)startPinchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)staysCenteredDuringPinch;
- (BOOL)staysCenteredDuringRotation;
- (void)stopFlyoverAnimation;
- (void)stopPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopSnappingAnimations;
- (void)stopTracking;
- (void)stopTrackingAnnotation;
- (struct shared_ptr<gss::CartoStyle> { struct CartoStyle {} *x1; struct __shared_weak_count {} *x2; })styleForFeature:(id)arg1;
- (struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (struct shared_ptr<gss::StyleSheet> { struct StyleSheet {} *x1; struct __shared_weak_count {} *x2; })stylesheet;
- (BOOL)stylesheetIsDevResource;
- (id)stylesheetName;
- (BOOL)supportsMapType:(int)arg1;
- (BOOL)supportsNightMode;
- (int)targetDisplay;
- (double)topDownMinimumZoomLevelForTileSize:(int)arg1;
- (int)trackingCameraPanStyle;
- (double)trackingZoomScale;
- (BOOL)trafficEnabled;
- (BOOL)trafficIncidentsEnabled;
- (id)transitLineMarkersForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)transitLineMarkersInCurrentViewport;
- (BOOL)transitLinesDisabled;
- (void)transitionToTracking:(BOOL)arg1 mapMode:(int)arg2 pounceCompletionHandler:(id /* block */)arg3;
- (void)updateCameraContext:(id)arg1;
- (BOOL)updateDisplayLinkStatus;
- (void)updateOnscreenTimestamps;
- (void)updatePanWithTranslation:(struct CGPoint { float x1; float x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitchWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 translation:(double)arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 newValue:(double)arg2;
- (double)userZoomFocusStyleGroundspanMeters;
- (double)userZoomFocusStyleMaxGroundspanMeters;
- (double)userZoomFocusStyleMinGroundspanMeters;
- (struct { BOOL x1; })vehicleState;
- (double)verticalYaw;
- (id)viewportInfo;
- (id)visibleTileSets;
- (void)willEnterForeground;
- (double)yaw;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { float x1; float x2; })arg2 completionHandler:(id /* block */)arg3;
- (double)zoomLevelAdjustmentForTileSize:(int)arg1;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint { float x1; float x2; })arg2;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_configureFromDefaults:(BOOL)arg1;

@end

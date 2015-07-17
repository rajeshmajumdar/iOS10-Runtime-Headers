/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintInteractionControllerInternals : NSObject {
    UIPrintInfo * _activePrintInfo;
    int  _currentPage;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _currentRange;
    UIPrintPageRenderer * _formatterRenderer;
    BOOL  _manualPrintPageEnabled;
    int  _pageCount;
    int  _pageCountWithRanges;
    NSArray * _pageRanges;
    int  _pagesDrawn;
    UIPrintPaper * _paper;
    NSMutableSet * _previewStates;
    int  _printInfoState;
    UIPrintPanelViewController * _printPanelViewController;
    PKPrintSettings * _printSettings;
    PKPrinter * _printer;
    UIPrintingProgress * _printingProgress;
    NSURL * _saveFileURL;
    BOOL  _supressNotifyDismissed;
    NSURL * _tempPreviewFileURL;
}

@property int pageCountWithRanges;
@property (retain) NSMutableSet *previewStates;
@property (retain) NSURL *tempPreviewFileURL;

- (void).cxx_destruct;
- (id)init;
- (int)pageCountWithRanges;
- (id)previewStates;
- (void)setPageCountWithRanges:(int)arg1;
- (void)setPreviewStates:(id)arg1;
- (void)setTempPreviewFileURL:(id)arg1;
- (id)tempPreviewFileURL;

@end

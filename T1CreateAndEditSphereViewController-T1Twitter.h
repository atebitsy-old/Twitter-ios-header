//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CreateAndEditSphereViewController.h>

#import <T1Twitter/UIDropInteractionDelegate-Protocol.h>

@interface T1CreateAndEditSphereViewController (T1Twitter) <UIDropInteractionDelegate>
- (void)form:(id)arg1 didChangeSubmittability:(_Bool)arg2;
- (_Bool)shouldRemoveWithUser:(id)arg1 in:(id)arg2;
- (void)didRemoveWithUser:(id)arg1 forViewModel:(id)arg2 in:(id)arg3;
- (void)didAddWithUser:(id)arg1 forViewModel:(id)arg2 in:(id)arg3;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
@end


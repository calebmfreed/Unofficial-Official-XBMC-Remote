//
//  VolumeSliderView.h
//  XBMC Remote
//
//  Created by Giovanni Messina on 27/3/12.
//  Copyright (c) 2012 Korec s.r.l. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DSJSONRPC.h"

@interface VolumeSliderView : UIView{
    IBOutlet UIView *volumeView;
    IBOutlet UISlider *volumeSlider;
    IBOutlet UILabel *volumeLabel;
    DSJSONRPC *jsonRPC;
   // NSTimer* timer;
}

- (IBAction)slideVolume:(id)sender;

-(void)startTimer;

-(void)stopTimer;

@property (nonatomic, retain) NSTimer* timer;

@end
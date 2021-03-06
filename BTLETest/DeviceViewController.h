//
//  DeviceViewController.h
//  BTLETools
//
//  Created by Tijn Kooijmans on 10-04-12.
//  Copyright (c) 2012 Studio Sophisti. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BTLEDevice;

@interface DeviceViewController : UITableViewController
{
    IBOutlet UILabel *lblName, *lblTxPower, *lblUUID, *lblServices, *lblData;
    IBOutlet UIActivityIndicatorView *actConnect;
    IBOutlet UIButton *btnConnect;
    IBOutlet UIImageView *btImageView;
    IBOutlet UITableViewCell *servicesCell, *connectCell;
}

@property (nonatomic, strong) BTLEDevice* device;

- (IBAction)actionConnect:(id)sender;
- (void)updateViews;
- (void)updateRSSI;
- (void)updateLabels;

@end
